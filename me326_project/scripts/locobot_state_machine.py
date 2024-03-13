#!/usr/bin/env python3

# Copyright (C) 2023  Miguel Ángel González Santamarta

# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.

# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <https://www.gnu.org/licenses/>.


import rclpy
from simple_node import Node
from geometry_msgs.msg import Pose, PoseStamped
from locobot_interfaces.action import MoveArm, MoveGripper, MoveBase, TiltCamera, SpinBase
from locobot_interfaces.srv import SetPose, GetBasePose, AttachDetach

from yasmin import CbState
from yasmin import Blackboard
from yasmin import StateMachine
from yasmin_ros import ServiceState, ActionState
from yasmin_ros.basic_outcomes import SUCCEED, ABORT, CANCEL
from yasmin_viewer import YasminViewerPub

import numpy as np

EMPTY = "empty"

class TiltingCamera(ActionState):
    def __init__(self, node: Node) -> None:
        super().__init__(
            node,  # node
            TiltCamera,  # action type
            'tiltcamera',  # action name
            self.create_goal_handler,  # cb to create the goal
            None,  # outcomes. Includes (SUCCEED, ABORT, CANCEL)
            self.response_handler  # cb to process the response
        )

    def create_goal_handler(self, blackboard: Blackboard) -> TiltCamera.Goal:
        print("Tilting Camera Down")
        goal = TiltCamera.Goal()
        goal.angle = 0.30
        return goal

    def response_handler(self, blackboard: Blackboard, response: TiltCamera.Result) -> str:
        blackboard.camera_tilt_res = response.success
        return SUCCEED

class SpinningBase(ActionState):
    def __init__(self, node: Node) -> None:
        super().__init__(
            node,  # node
            SpinBase,  # action type
            'spinbase',  # action name
            self.create_goal_handler,  # cb to create the goal
            None,  # outcomes. Includes (SUCCEED, ABORT, CANCEL)
            self.response_handler  # cb to process the response
        )

    def create_goal_handler(self, blackboard: Blackboard) -> SpinBase.Goal:
        print("Spinning")
        goal = SpinBase.Goal()
        goal.theta = 365.0
        return goal

    def response_handler(self, blackboard: Blackboard, response: SpinBase.Result) -> str:
        blackboard.spin_base_res = response.success
        return SUCCEED

class GettingPersonalPileTarget(ServiceState):
    def __init__(self, node: Node) -> None:
        super().__init__(
            node,  # node
            GetBasePose,  # srv type
            'get_base_pose',  # service name
            self.create_request_handler,  # cb to create the request
            None,  # outcomes. Includes (SUCCEED, ABORT)
            self.response_handler  # cb to process the response
        )

    def create_request_handler(self, blackboard: Blackboard) -> GetBasePose.Request:
        print("Getting Personal Pile Target")
        pose_req = GetBasePose.Request()
        pose_req.pose.header.frame_id = 'origin_global'
        # pose_req.pose.header.stamp = self.node.get_clock().now().to_msg()
        pose_req.pose.pose.orientation.z = -0.707
        pose_req.pose.pose.orientation.w = 0.707
        return pose_req

    def response_handler(self, blackboard: Blackboard, response: GetBasePose.Response) -> str:
        base_goal = MoveBase.Goal()
        base_goal.target_pose = response.base_pose
        base_goal.control_base_angle_bool = response.angle_bool

        blackboard.personal_pile_pose = base_goal
        blackboard.base_to_mid = response.success
        return SUCCEED

class GettingMiddleTarget(ServiceState):
    def __init__(self, node: Node) -> None:
        super().__init__(
            node,  # node
            GetBasePose,  # srv type
            'get_base_pose',  # service name
            self.create_request_handler,  # cb to create the request
            None,  # outcomes. Includes (SUCCEED, ABORT)
            self.response_handler  # cb to process the response
        )

    def create_request_handler(self, blackboard: Blackboard) -> GetBasePose.Request:
        print("Getting Middle Pile Target")
        pose_req = GetBasePose.Request()
        pose_req.pose.header.frame_id = 'block_zone_global'
        # pose_req.pose.header.stamp = self.node.get_clock().now().to_msg()
        pose_req.pose.pose.orientation.w = 1.0
        return pose_req

    def response_handler(self, blackboard: Blackboard, response: GetBasePose.Response) -> str:
        base_goal = MoveBase.Goal()
        base_goal.target_pose = response.base_pose
        base_goal.control_base_angle_bool = response.angle_bool

        blackboard.middle_pose = base_goal
        blackboard.base_to_mid = response.success

        return SUCCEED

class OpeningGripper(ActionState):
    def __init__(self, node: Node) -> None:
        super().__init__(
            node,  # node
            MoveGripper,  # action type
            "movegripper",  # action name
            self.create_goal_handler,  # cb to create the goal
            None,  # outcomes. Includes (SUCCEED, ABORT, CANCEL)
            self.response_handler  # cb to process the response
        )

    def create_goal_handler(self, blackboard: Blackboard) -> MoveGripper.Goal:
        print("Opening Gripper")
        goal = MoveGripper.Goal()
        goal.command = 'open'
        goal.duration = 3.0
        return goal

    def response_handler(self, blackboard: Blackboard, response: MoveGripper.Result) -> str:
        blackboard.open_grip_res = response.success
        return SUCCEED

class ClosingGripper(ActionState):
    def __init__(self, node: Node) -> None:
        super().__init__(
            node,  # node
            MoveGripper,  # action type
            "movegripper",  # action name
            self.create_goal_handler,  # cb to create the goal
            None,  # outcomes. Includes (SUCCEED, ABORT, CANCEL)
            self.response_handler  # cb to process the response
        )

    def create_goal_handler(self, blackboard: Blackboard) -> MoveGripper.Goal:
        print("Closing Gripper")
        goal = MoveGripper.Goal()
        goal.command = 'close'
        goal.duration = 3.0
        return goal

    def response_handler(self, blackboard: Blackboard, response: MoveGripper.Result) -> str:
        blackboard.close_grip_res = response.success
        return SUCCEED

class AttachingBlock(ServiceState):
    def __init__(self, node: Node) -> None:
        super().__init__(
            node,  # node
            AttachDetach,  # action type
            "attach_detach_service",  # action name
            self.create_goal_handler,  # cb to create the goal
            None,  # outcomes. Includes (SUCCEED, ABORT)
            self.response_handler  # cb to process the response
        )

    def create_goal_handler(self, blackboard: Blackboard) -> AttachDetach.Request:
        print("Attaching Block")
        goal = AttachDetach.Request()
        goal.command = 'close'
        return goal

    def response_handler(self, blackboard: Blackboard, response: AttachDetach.Response) -> str:
        blackboard.attach_res = response.success
        return SUCCEED

class DetachingBlock(ServiceState):
    def __init__(self, node: Node) -> None:
        super().__init__(
            node,  # node
            AttachDetach,  # action type
            "attach_detach_service",  # action name
            self.create_goal_handler,  # cb to create the goal
            None,  # outcomes. Includes (SUCCEED, ABORT)
            self.response_handler  # cb to process the response
        )

    def create_goal_handler(self, blackboard: Blackboard) -> AttachDetach.Request:
        print("Detaching Block")
        goal = AttachDetach.Request()
        goal.command = 'open'
        return goal

    def response_handler(self, blackboard: Blackboard, response: AttachDetach.Response) -> str:
        blackboard.detach_res = response.success
        return SUCCEED

class MovingArmToBlock(ActionState):
    def __init__(self, node: Node) -> None:
        super().__init__(
            node,  # node
            MoveArm,  # action type
            "movearm",  # action name
            self.create_goal_handler,  # cb to create the goal
            None,  # outcomes. Includes (SUCCEED, ABORT, CANCEL)
            self.response_handler  # cb to process the response
        )

    def create_goal_handler(self, blackboard: Blackboard) -> MoveArm.Goal:
        print("Moving Arm to Block")
        goal = MoveArm.Goal()
        goal.pose = [blackboard.arm_target[0], blackboard.arm_target[1], 0.02, 0.0, 90.0, 0.0]
        return goal

    def response_handler(self, blackboard: Blackboard, response: MoveArm.Result) -> str:
        blackboard.arm_to_target = response.success
        return SUCCEED

class MovingArmHome(ActionState):
    def __init__(self, node: Node) -> None:
        super().__init__(
            node,  # node
            MoveArm,  # action type
            "movearm",  # action name
            self.create_goal_handler,  # cb to create the goal
            None,  # outcomes. Includes (SUCCEED, ABORT, CANCEL)
            self.response_handler  # cb to process the response
        )

    def create_goal_handler(self, blackboard: Blackboard) -> MoveArm.Goal:
        print("Moving Arm Home")
        goal = MoveArm.Goal()
        goal.pose = [0.4, 0.0, 0.2, 0.0, 90.0, 0.0]
        return goal

    def response_handler(self, blackboard: Blackboard, response: MoveArm.Result) -> str:
        blackboard.arm_home = response.success
        return SUCCEED

class MovingArmToCheck(ActionState):
    def __init__(self, node: Node) -> None:
        super().__init__(
            node,  # node
            MoveArm,  # action type
            "movearm",  # action name
            self.create_goal_handler,  # cb to create the goal
            None,  # outcomes. Includes (SUCCEED, ABORT, CANCEL)
            self.response_handler  # cb to process the response
        )

    def create_goal_handler(self, blackboard: Blackboard) -> MoveArm.Goal:
        print("Moving Arm to Check")
        goal = MoveArm.Goal()
        goal.pose = [0.5, 0.0, 0.5, 0.0, -90.0, 0.0]
        return goal

    def response_handler(self, blackboard: Blackboard, response: MoveArm.Result) -> str:
        blackboard.arm_at_check = response.success
        return SUCCEED

class MovingArmToPlace(ActionState):
    def __init__(self, node: Node) -> None:
        super().__init__(
            node,  # node
            MoveArm,  # action type
            "movearm",  # action name
            self.create_goal_handler,  # cb to create the goal
            None,  # outcomes. Includes (SUCCEED, ABORT, CANCEL)
            self.response_handler  # cb to process the response
        )

    def create_goal_handler(self, blackboard: Blackboard) -> MoveArm.Goal:
        print("Moving Arm to Place")
        goal = MoveArm.Goal()
        goal.pose = [0.5, 0.0, 0.05, 0.0, 90.0, 0.0]
        return goal

    def response_handler(self, blackboard: Blackboard, response: MoveArm.Result) -> str:
        blackboard.arm_to_target = response.success
        return SUCCEED

class MovingBaseToMiddle(ActionState):
    def __init__(self, node: Node) -> None:
        super().__init__(
            node,  # node
            MoveBase,  # action type
            "movebase",  # action name
            self.create_goal_handler,  # cb to create the goal
            None,  # outcomes. Includes (SUCCEED, ABORT, CANCEL)
            self.response_handler  # cb to process the response
        )

    def create_goal_handler(self, blackboard: Blackboard) -> MoveBase.Goal:
        print("Moving Base to Middle")
        return blackboard.middle_pose

    def response_handler(self, blackboard: Blackboard, response: MoveBase.Result) -> str:
        blackboard.base_to_middle = response.done
        return SUCCEED

class MovingBaseToBlock(ActionState):
    def __init__(self, node: Node) -> None:
        super().__init__(
            node,  # node
            MoveBase,  # action type
            "movebase",  # action name
            self.create_goal_handler,  # cb to create the goal
            None,  # outcomes. Includes (SUCCEED, ABORT, CANCEL)
            self.response_handler  # cb to process the response
        )

    def create_goal_handler(self, blackboard: Blackboard) -> MoveBase.Goal:
        print("Moving Base to Block")
        goal = MoveBase.Goal()
        goal.control_base_angle_bool = True
        target_pose = Pose()
        target_pose.position.x = blackboard.base_target[0]
        target_pose.position.y = blackboard.base_target[1]

        target_pose.position.z = 0.0
        target_pose.orientation.x = 0.0
        target_pose.orientation.y = 0.0

        theta = ((3.14159/180)*blackboard.base_target[2])
        target_pose.orientation.z = np.round(np.sin(theta/2), decimals=2)
        target_pose.orientation.w = np.round(np.cos(theta/2), decimals=2)

        goal.target_pose = target_pose
        return goal

    def response_handler(self, blackboard: Blackboard, response: MoveBase.Result) -> str:
        blackboard.base_to_target = response.done
        return SUCCEED

class MovingBaseToPile(ActionState):
    def __init__(self, node: Node) -> None:
        super().__init__(
            node,  # node
            MoveBase,  # action type
            "movebase",  # action name
            self.create_goal_handler,  # cb to create the goal
            None,  # outcomes. Includes (SUCCEED, ABORT, CANCEL)
            self.response_handler  # cb to process the response
        )

    def create_goal_handler(self, blackboard: Blackboard) -> MoveBase.Goal:
        print("Moving Base to Pile")
        return blackboard.personal_pile_pose

    def response_handler(self, blackboard: Blackboard, response: MoveBase.Result) -> str:
        blackboard.base_to_pile = response.done
        return SUCCEED

def get_resource_list(blackboard: Blackboard) -> str:
    blackboard.resource_list = ['R', 'G', 'B', 'Y']
    print("Resources to collect: ", blackboard.resource_list)
    return SUCCEED

def get_curr_block(blackboard: Blackboard) -> str:
    if not blackboard.resource_list:  #resource list is empty --> done!
        print("No more resources to collect")
        return EMPTY

    blackboard.curr_block = blackboard.resource_list[0]  #[x, y, theta in deg]
    print("Current target color: ", blackboard.curr_block)
    return SUCCEED

def update_resource_list(blackboard: Blackboard) -> str:
    blackboard.resource_list.pop(0)
    return SUCCEED

# dummy function for now-- will be replaced by service call to get block position from vision
def get_base_target(blackboard: Blackboard) -> str:
    blackboard.base_target = [1.0, 0.5, 0.0]  #[x, y, theta in deg]
    return SUCCEED

# dummy function for now-- will be replaced by service call to get position to pick/place block from vision
def get_arm_target(blackboard: Blackboard) -> str:
    blackboard.arm_target = [0.5, 0.0]  #[x, y]
    return SUCCEED

# dummy function for now-- real function should return true if there's a block of correct color at specified depth, false otherwise
def verify_block(blackboard: Blackboard) -> str:
    return SUCCEED


class LocobotFSMNode(Node):
    def __init__(self):
        super().__init__("locobot_fsm_node")

        # create state machine
        sm = StateMachine(outcomes=["CANCELLED", "ABORTED", "DONE"])

        # Tilt camera
        sm.add_state("TILTING_CAMERA_DOWN", TiltingCamera(self),
                     transitions={SUCCEED: "SPINNING",
                                  CANCEL: "CANCELLED",
                                  ABORT: "ABORTED"})

        # Spin to see all april tags
        sm.add_state("SPINNING", SpinningBase(self),
                     transitions={SUCCEED: "GETTING_PERSONAL_TARGET",
                                  CANCEL: "CANCELLED",
                                  ABORT: "ABORTED"})

        # Get target pose for personal pile of blocks
        sm.add_state("GETTING_PERSONAL_TARGET", GettingPersonalPileTarget(self),  #get target position of block to move base to
                     transitions={SUCCEED: "GETTING_MIDDLE_TARGET",
                                  ABORT: "ABORTED"})

        # Get target pose for middle pile of blocks
        sm.add_state("GETTING_MIDDLE_TARGET", GettingMiddleTarget(self),  #get target position of block to move base to
                     transitions={SUCCEED: "GETTING_RESOURCE_LIST",
                                  ABORT: "ABORTED"})

        # Get resources list
        sm.add_state("GETTING_RESOURCE_LIST", CbState([SUCCEED], get_resource_list),
                     transitions={SUCCEED: "GETTING_CURR_BLOCK"})

        # Get current block color of interest
        sm.add_state("GETTING_CURR_BLOCK", CbState([SUCCEED, EMPTY], get_curr_block),
                     transitions={SUCCEED: "MOVING_BASE_TO_MIDDLE",
                                  EMPTY: "DONE"})

        # Move base to middle pile
        sm.add_state("MOVING_BASE_TO_MIDDLE", MovingBaseToMiddle(self),
                     transitions={SUCCEED: "GETTING_BASE_TARGET",
                                  CANCEL: "CANCELLED",
                                  ABORT: "ABORTED"})

        # Get position of block of interest--TODO: send service color request to Josh's stuff, get position back
        sm.add_state("GETTING_BASE_TARGET", CbState([SUCCEED], get_base_target),  #get target position of block to move base to
                     transitions={SUCCEED: "MOVING_BASE_TO_BLOCK",
                                  ABORT: "ABORTED"})
        
        # Move base to a block of interest--TODO: send service pose request to Sam's stuff, get success back
        sm.add_state("MOVING_BASE_TO_BLOCK", MovingBaseToBlock(self),
                     transitions={SUCCEED: "GETTING_ARM_TARGET",
                                  CANCEL: "CANCELLED",
                                  ABORT: "ABORTED"})

        # Pick up block
        # Get position of block of interest--TODO: send service color request to Josh's stuff, get Pose back
        sm.add_state("GETTING_ARM_TARGET", CbState([SUCCEED], get_arm_target),  #get target position of block to move arm to
                     transitions={SUCCEED: "OPENING_GRIPPER_PICK"})
        sm.add_state("OPENING_GRIPPER_PICK", OpeningGripper(self),  #open gripper
                     transitions={SUCCEED: "MOVING_ARM_TO_BLOCK",
                                  CANCEL: "CANCELLED",
                                  ABORT: "ABORTED"})
        sm.add_state("MOVING_ARM_TO_BLOCK", MovingArmToBlock(self),  #move arm to target position of block
                     transitions={SUCCEED: "CLOSING_GRIPPER",
                                  CANCEL: "CANCELLED",
                                  ABORT: "ABORTED"})
        sm.add_state("CLOSING_GRIPPER", ClosingGripper(self),  #close gripper to pick up block
                     transitions={SUCCEED: "ATTACHING_BLOCK",
                                  CANCEL: "CANCELLED",
                                  ABORT: "ABORTED"})
        sm.add_state("ATTACHING_BLOCK", AttachingBlock(self),  #get target position of block to move base to
                     transitions={SUCCEED: "MOVING_ARM_TO_CHECK",
                                  ABORT: "ABORTED"})


        # Check if block was picked up
        sm.add_state("MOVING_ARM_TO_CHECK", MovingArmToCheck(self),  #move arm to checking position (gripper in front of camera)
                     transitions={SUCCEED: "VERIFY_BLOCK",
                                  CANCEL: "CANCELLED",
                                  ABORT: "ABORTED"})
        sm.add_state("VERIFY_BLOCK", CbState([SUCCEED], verify_block),  #verify if correct color block is picked up
                     transitions={SUCCEED: "MOVING_BASE_TO_PILE"})
        # sm.add_state("MOVING_ARM_HOME", MovingArmHome(self),  #move arm to home position
        #              transitions={SUCCEED: "MOVING_BASE_TO_PILE",
        #                           CANCEL: "CANCELLED",
        #                           ABORT: "ABORTED"})

        # Move base to personal pile
        sm.add_state("MOVING_BASE_TO_PILE", MovingBaseToPile(self),
                     transitions={SUCCEED: "MOVING_ARM_TO_PLACE",  #open gripper
                                  CANCEL: "CANCELLED",
                                  ABORT: "ABORTED"})

        # Place block in personal pile
        sm.add_state("MOVING_ARM_TO_PLACE", MovingArmToPlace(self),  #move arm to target position
                     transitions={SUCCEED: "DETACHING_BLOCK",
                                  CANCEL: "CANCELLED",
                                  ABORT: "ABORTED"})
        sm.add_state("DETACHING_BLOCK", DetachingBlock(self),  #get target position of block to move base to
                     transitions={SUCCEED: "OPENING_GRIPPER_PLACE",
                                  ABORT: "ABORTED"})
        sm.add_state("OPENING_GRIPPER_PLACE", OpeningGripper(self),  #open gripper to place block
                     transitions={SUCCEED: "MOVING_ARM_HOME",
                                  CANCEL: "CANCELLED",
                                  ABORT: "ABORTED"})
        sm.add_state("MOVING_ARM_HOME", MovingArmHome(self),  #move arm to home position
                     transitions={SUCCEED: "UPDATING_RESOURCE_LIST",
                                  CANCEL: "CANCELLED",
                                  ABORT: "ABORTED"})

        # Update resources list
        sm.add_state("UPDATING_RESOURCE_LIST", CbState([SUCCEED], update_resource_list),  #get target position of block to move base to
                     transitions={SUCCEED: "GETTING_CURR_BLOCK"})


        # pub
        YasminViewerPub(self, "Locobot_FSM", sm)

        # execute
        outcome = sm()
        print("Outcome: ", outcome)


# main
def main(args=None):

    rclpy.init(args=args)
    node = LocobotFSMNode()
    node.join_spin()
    rclpy.shutdown()


if __name__ == "__main__":
    main()