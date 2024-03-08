// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from la_msgs:srv/Ptps.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "la_msgs/srv/detail/ptps__struct.h"
#include "la_msgs/srv/detail/ptps__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool la_msgs__srv__ptps__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[31];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("la_msgs.srv._ptps.Ptps_Request", full_classname_dest, 30) == 0);
  }
  la_msgs__srv__Ptps_Request * ros_message = _ros_message;
  {  // desired_frame
    PyObject * field = PyObject_GetAttrString(_pymsg, "desired_frame");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->desired_frame, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * la_msgs__srv__ptps__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Ptps_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("la_msgs.srv._ptps");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Ptps_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  la_msgs__srv__Ptps_Request * ros_message = (la_msgs__srv__Ptps_Request *)raw_ros_message;
  {  // desired_frame
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->desired_frame.data,
      strlen(ros_message->desired_frame.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "desired_frame", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "la_msgs/srv/detail/ptps__struct.h"
// already included above
// #include "la_msgs/srv/detail/ptps__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "geometry_msgs/msg/detail/point_stamped__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point_stamped__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point_stamped__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point_stamped__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point_stamped__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point_stamped__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point_stamped__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point_stamped__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point_stamped__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool la_msgs__srv__ptps__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[32];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("la_msgs.srv._ptps.Ptps_Response", full_classname_dest, 31) == 0);
  }
  la_msgs__srv__Ptps_Response * ros_message = _ros_message;
  {  // red_present
    PyObject * field = PyObject_GetAttrString(_pymsg, "red_present");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->red_present = (Py_True == field);
    Py_DECREF(field);
  }
  {  // blue_present
    PyObject * field = PyObject_GetAttrString(_pymsg, "blue_present");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->blue_present = (Py_True == field);
    Py_DECREF(field);
  }
  {  // yellow_present
    PyObject * field = PyObject_GetAttrString(_pymsg, "yellow_present");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->yellow_present = (Py_True == field);
    Py_DECREF(field);
  }
  {  // green_present
    PyObject * field = PyObject_GetAttrString(_pymsg, "green_present");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->green_present = (Py_True == field);
    Py_DECREF(field);
  }
  {  // red_points
    PyObject * field = PyObject_GetAttrString(_pymsg, "red_points");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'red_points'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!geometry_msgs__msg__PointStamped__Sequence__init(&(ros_message->red_points), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create geometry_msgs__msg__PointStamped__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    geometry_msgs__msg__PointStamped * dest = ros_message->red_points.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!geometry_msgs__msg__point_stamped__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // blue_points
    PyObject * field = PyObject_GetAttrString(_pymsg, "blue_points");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'blue_points'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!geometry_msgs__msg__PointStamped__Sequence__init(&(ros_message->blue_points), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create geometry_msgs__msg__PointStamped__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    geometry_msgs__msg__PointStamped * dest = ros_message->blue_points.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!geometry_msgs__msg__point_stamped__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // yellow_points
    PyObject * field = PyObject_GetAttrString(_pymsg, "yellow_points");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'yellow_points'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!geometry_msgs__msg__PointStamped__Sequence__init(&(ros_message->yellow_points), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create geometry_msgs__msg__PointStamped__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    geometry_msgs__msg__PointStamped * dest = ros_message->yellow_points.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!geometry_msgs__msg__point_stamped__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // green_points
    PyObject * field = PyObject_GetAttrString(_pymsg, "green_points");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'green_points'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!geometry_msgs__msg__PointStamped__Sequence__init(&(ros_message->green_points), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create geometry_msgs__msg__PointStamped__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    geometry_msgs__msg__PointStamped * dest = ros_message->green_points.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!geometry_msgs__msg__point_stamped__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * la_msgs__srv__ptps__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Ptps_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("la_msgs.srv._ptps");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Ptps_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  la_msgs__srv__Ptps_Response * ros_message = (la_msgs__srv__Ptps_Response *)raw_ros_message;
  {  // red_present
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->red_present ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "red_present", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blue_present
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->blue_present ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blue_present", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yellow_present
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->yellow_present ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yellow_present", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // green_present
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->green_present ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "green_present", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // red_points
    PyObject * field = NULL;
    size_t size = ros_message->red_points.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    geometry_msgs__msg__PointStamped * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->red_points.data[i]);
      PyObject * pyitem = geometry_msgs__msg__point_stamped__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "red_points", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blue_points
    PyObject * field = NULL;
    size_t size = ros_message->blue_points.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    geometry_msgs__msg__PointStamped * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->blue_points.data[i]);
      PyObject * pyitem = geometry_msgs__msg__point_stamped__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "blue_points", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yellow_points
    PyObject * field = NULL;
    size_t size = ros_message->yellow_points.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    geometry_msgs__msg__PointStamped * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->yellow_points.data[i]);
      PyObject * pyitem = geometry_msgs__msg__point_stamped__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "yellow_points", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // green_points
    PyObject * field = NULL;
    size_t size = ros_message->green_points.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    geometry_msgs__msg__PointStamped * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->green_points.data[i]);
      PyObject * pyitem = geometry_msgs__msg__point_stamped__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "green_points", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
