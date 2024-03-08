# generated from rosidl_generator_py/resource/_idl.py.em
# with input from la_msgs:srv/Ptps.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Ptps_Request(type):
    """Metaclass of message 'Ptps_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('la_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'la_msgs.srv.Ptps_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__ptps__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__ptps__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__ptps__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__ptps__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__ptps__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Ptps_Request(metaclass=Metaclass_Ptps_Request):
    """Message class 'Ptps_Request'."""

    __slots__ = [
        '_desired_frame',
    ]

    _fields_and_field_types = {
        'desired_frame': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.desired_frame = kwargs.get('desired_frame', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.desired_frame != other.desired_frame:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def desired_frame(self):
        """Message field 'desired_frame'."""
        return self._desired_frame

    @desired_frame.setter
    def desired_frame(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'desired_frame' field must be of type 'str'"
        self._desired_frame = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Ptps_Response(type):
    """Metaclass of message 'Ptps_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('la_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'la_msgs.srv.Ptps_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__ptps__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__ptps__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__ptps__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__ptps__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__ptps__response

            from geometry_msgs.msg import PointStamped
            if PointStamped.__class__._TYPE_SUPPORT is None:
                PointStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Ptps_Response(metaclass=Metaclass_Ptps_Response):
    """Message class 'Ptps_Response'."""

    __slots__ = [
        '_red_present',
        '_blue_present',
        '_yellow_present',
        '_green_present',
        '_red_points',
        '_blue_points',
        '_yellow_points',
        '_green_points',
    ]

    _fields_and_field_types = {
        'red_present': 'boolean',
        'blue_present': 'boolean',
        'yellow_present': 'boolean',
        'green_present': 'boolean',
        'red_points': 'sequence<geometry_msgs/PointStamped>',
        'blue_points': 'sequence<geometry_msgs/PointStamped>',
        'yellow_points': 'sequence<geometry_msgs/PointStamped>',
        'green_points': 'sequence<geometry_msgs/PointStamped>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PointStamped')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PointStamped')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PointStamped')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PointStamped')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.red_present = kwargs.get('red_present', bool())
        self.blue_present = kwargs.get('blue_present', bool())
        self.yellow_present = kwargs.get('yellow_present', bool())
        self.green_present = kwargs.get('green_present', bool())
        self.red_points = kwargs.get('red_points', [])
        self.blue_points = kwargs.get('blue_points', [])
        self.yellow_points = kwargs.get('yellow_points', [])
        self.green_points = kwargs.get('green_points', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.red_present != other.red_present:
            return False
        if self.blue_present != other.blue_present:
            return False
        if self.yellow_present != other.yellow_present:
            return False
        if self.green_present != other.green_present:
            return False
        if self.red_points != other.red_points:
            return False
        if self.blue_points != other.blue_points:
            return False
        if self.yellow_points != other.yellow_points:
            return False
        if self.green_points != other.green_points:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def red_present(self):
        """Message field 'red_present'."""
        return self._red_present

    @red_present.setter
    def red_present(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'red_present' field must be of type 'bool'"
        self._red_present = value

    @property
    def blue_present(self):
        """Message field 'blue_present'."""
        return self._blue_present

    @blue_present.setter
    def blue_present(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'blue_present' field must be of type 'bool'"
        self._blue_present = value

    @property
    def yellow_present(self):
        """Message field 'yellow_present'."""
        return self._yellow_present

    @yellow_present.setter
    def yellow_present(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'yellow_present' field must be of type 'bool'"
        self._yellow_present = value

    @property
    def green_present(self):
        """Message field 'green_present'."""
        return self._green_present

    @green_present.setter
    def green_present(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'green_present' field must be of type 'bool'"
        self._green_present = value

    @property
    def red_points(self):
        """Message field 'red_points'."""
        return self._red_points

    @red_points.setter
    def red_points(self, value):
        if __debug__:
            from geometry_msgs.msg import PointStamped
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, PointStamped) for v in value) and
                 True), \
                "The 'red_points' field must be a set or sequence and each value of type 'PointStamped'"
        self._red_points = value

    @property
    def blue_points(self):
        """Message field 'blue_points'."""
        return self._blue_points

    @blue_points.setter
    def blue_points(self, value):
        if __debug__:
            from geometry_msgs.msg import PointStamped
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, PointStamped) for v in value) and
                 True), \
                "The 'blue_points' field must be a set or sequence and each value of type 'PointStamped'"
        self._blue_points = value

    @property
    def yellow_points(self):
        """Message field 'yellow_points'."""
        return self._yellow_points

    @yellow_points.setter
    def yellow_points(self, value):
        if __debug__:
            from geometry_msgs.msg import PointStamped
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, PointStamped) for v in value) and
                 True), \
                "The 'yellow_points' field must be a set or sequence and each value of type 'PointStamped'"
        self._yellow_points = value

    @property
    def green_points(self):
        """Message field 'green_points'."""
        return self._green_points

    @green_points.setter
    def green_points(self, value):
        if __debug__:
            from geometry_msgs.msg import PointStamped
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, PointStamped) for v in value) and
                 True), \
                "The 'green_points' field must be a set or sequence and each value of type 'PointStamped'"
        self._green_points = value


class Metaclass_Ptps(type):
    """Metaclass of service 'Ptps'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('la_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'la_msgs.srv.Ptps')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__ptps

            from la_msgs.srv import _ptps
            if _ptps.Metaclass_Ptps_Request._TYPE_SUPPORT is None:
                _ptps.Metaclass_Ptps_Request.__import_type_support__()
            if _ptps.Metaclass_Ptps_Response._TYPE_SUPPORT is None:
                _ptps.Metaclass_Ptps_Response.__import_type_support__()


class Ptps(metaclass=Metaclass_Ptps):
    from la_msgs.srv._ptps import Ptps_Request as Request
    from la_msgs.srv._ptps import Ptps_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
