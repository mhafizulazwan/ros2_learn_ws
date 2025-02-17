# generated from rosidl_generator_py/resource/_idl.py.em
# with input from srv_pkg:srv/JointConversion.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_JointConversion_Request(type):
    """Metaclass of message 'JointConversion_Request'."""

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
            module = import_type_support('srv_pkg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'srv_pkg.srv.JointConversion_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__joint_conversion__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__joint_conversion__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__joint_conversion__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__joint_conversion__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__joint_conversion__request

            from std_msgs.msg import Float64
            if Float64.__class__._TYPE_SUPPORT is None:
                Float64.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class JointConversion_Request(metaclass=Metaclass_JointConversion_Request):
    """Message class 'JointConversion_Request'."""

    __slots__ = [
        '_joint_input',
    ]

    _fields_and_field_types = {
        'joint_input': 'std_msgs/Float64[7]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64'), 7),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Float64
        self.joint_input = kwargs.get(
            'joint_input',
            [Float64() for x in range(7)]
        )

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
        if self.joint_input != other.joint_input:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def joint_input(self):
        """Message field 'joint_input'."""
        return self._joint_input

    @joint_input.setter
    def joint_input(self, value):
        if __debug__:
            from std_msgs.msg import Float64
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
                 len(value) == 7 and
                 all(isinstance(v, Float64) for v in value) and
                 True), \
                "The 'joint_input' field must be a set or sequence with length 7 and each value of type 'Float64'"
        self._joint_input = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_JointConversion_Response(type):
    """Metaclass of message 'JointConversion_Response'."""

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
            module = import_type_support('srv_pkg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'srv_pkg.srv.JointConversion_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__joint_conversion__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__joint_conversion__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__joint_conversion__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__joint_conversion__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__joint_conversion__response

            from std_msgs.msg import Float64
            if Float64.__class__._TYPE_SUPPORT is None:
                Float64.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class JointConversion_Response(metaclass=Metaclass_JointConversion_Response):
    """Message class 'JointConversion_Response'."""

    __slots__ = [
        '_joint_output',
    ]

    _fields_and_field_types = {
        'joint_output': 'std_msgs/Float64[7]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64'), 7),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Float64
        self.joint_output = kwargs.get(
            'joint_output',
            [Float64() for x in range(7)]
        )

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
        if self.joint_output != other.joint_output:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def joint_output(self):
        """Message field 'joint_output'."""
        return self._joint_output

    @joint_output.setter
    def joint_output(self, value):
        if __debug__:
            from std_msgs.msg import Float64
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
                 len(value) == 7 and
                 all(isinstance(v, Float64) for v in value) and
                 True), \
                "The 'joint_output' field must be a set or sequence with length 7 and each value of type 'Float64'"
        self._joint_output = value


class Metaclass_JointConversion(type):
    """Metaclass of service 'JointConversion'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('srv_pkg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'srv_pkg.srv.JointConversion')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__joint_conversion

            from srv_pkg.srv import _joint_conversion
            if _joint_conversion.Metaclass_JointConversion_Request._TYPE_SUPPORT is None:
                _joint_conversion.Metaclass_JointConversion_Request.__import_type_support__()
            if _joint_conversion.Metaclass_JointConversion_Response._TYPE_SUPPORT is None:
                _joint_conversion.Metaclass_JointConversion_Response.__import_type_support__()


class JointConversion(metaclass=Metaclass_JointConversion):
    from srv_pkg.srv._joint_conversion import JointConversion_Request as Request
    from srv_pkg.srv._joint_conversion import JointConversion_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
