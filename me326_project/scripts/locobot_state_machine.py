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
from geometry_msgs.msg import Pose
from locobot_interfaces.action import MoveArm, MoveGripper, MoveBase

from yasmin import CbState
from yasmin import Blackboard
from yasmin import StateMachine
from yasmin_ros import ActionState
from yasmin_ros.basic_outcomes import SUCCEED, ABORT, CANCEL
from yasmin_viewer import YasminViewerPub

import numpy as np

EMPTY = "empty"

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
        goal = MoveGripper.Goal()
        goal.command = 'open'
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
        goal = MoveGripper.Goal()
        goal.command = 'close'
        return goal

    def response_handler(self, blackboard: Blackboard, response: MoveGripper.Result) -> str:
        blackboard.close_grip_res = response.success
        return SUCCEED

class MovingArmToTarget(ActionState):
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
        goal = MoveArm.Goal()
        goal.pose = [0.4, 0.0, 0.6, 0.0, -90.0, 0.0]
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
        goal = MoveArm.Goal()
        goal.pose = [0.5, 0.0, 0.05, 0.0, 90.0, 0.0]
        return goal

    def response_handler(self, blackboard: Blackboard, response: MoveArm.Result) -> str:
        blackboard.arm_to_target = response.success
        return SUCCEED

class MovingBaseToTarget(ActionState):
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
        goal = MoveBase.Goal()
        goal.control_base_angle_bool = True
        target_pose = Pose()
        target_pose.position.x = 0.0
        target_pose.position.y = 0.0
        target_pose.position.z = 0.0
        target_pose.orientation.x = 0.0
        target_pose.orientation.y = 0.0
        target_pose.orientation.w = 1.0
        goal.target_pose = target_pose
        return goal

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
    print("Current color of interest: ", blackboard.curr_block)
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

        # Get resources list
        sm.add_state("GETTING_RESOURCE_LIST", CbState([SUCCEED], get_resource_list),  #get target position of block to move base to
                     transitions={SUCCEED: "GETTING_CURR_BLOCK"})

        # Get current block color of interest
        sm.add_state("GETTING_CURR_BLOCK", CbState([SUCCEED, EMPTY], get_curr_block),  #get target position of block to move base to
                     transitions={SUCCEED: "GETTING_BASE_TARGET",
                                  EMPTY: "DONE"})
        
        # Move base to block
        sm.add_state("GETTING_BASE_TARGET", CbState([SUCCEED], get_base_target),  #get target position of block to move base to
                     transitions={SUCCEED: "MOVING_BASE_TO_TARGET"})
        sm.add_state("MOVING_BASE_TO_TARGET", MovingBaseToTarget(self),
                     transitions={SUCCEED: "GETTING_ARM_TARGET",  #open gripper
                                  CANCEL: "CANCELLED",
                                  ABORT: "ABORTED"})

        # Pick up block
        sm.add_state("GETTING_ARM_TARGET", CbState([SUCCEED], get_arm_target),  #get target position of block to move arm to
                     transitions={SUCCEED: "OPENING_GRIPPER_PICK"})
        sm.add_state("OPENING_GRIPPER_PICK", OpeningGripper(self),
                     transitions={SUCCEED: "MOVING_ARM_TO_TARGET",  #open gripper
                                  CANCEL: "CANCELLED",
                                  ABORT: "ABORTED"})
        sm.add_state("MOVING_ARM_TO_TARGET", MovingArmToTarget(self),  #move arm to target position of block
                     transitions={SUCCEED: "CLOSING_GRIPPER",
                                  CANCEL: "CANCELLED",
                                  ABORT: "ABORTED"})
        sm.add_state("CLOSING_GRIPPER", ClosingGripper(self),  #close gripper to pick up block
                     transitions={SUCCEED: "MOVING_ARM_TO_CHECK",
                                  CANCEL: "CANCELLED",
                                  ABORT: "ABORTED"})

        # Check if block was piccked up
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
                     transitions={SUCCEED: "OPENING_GRIPPER_PLACE",
                                  CANCEL: "CANCELLED",
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