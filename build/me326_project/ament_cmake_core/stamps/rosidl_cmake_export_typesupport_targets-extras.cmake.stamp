# generated from
# rosidl_cmake/cmake/template/rosidl_cmake_export_typesupport_targets.cmake.in

set(_exported_typesupport_targets
  "__rosidl_typesupport_introspection_c:me326_project__rosidl_typesupport_introspection_c;__rosidl_typesupport_introspection_cpp:me326_project__rosidl_typesupport_introspection_cpp")

# populate me326_project_TARGETS_<suffix>
if(NOT _exported_typesupport_targets STREQUAL "")
  # loop over typesupport targets
  foreach(_tuple ${_exported_typesupport_targets})
    string(REPLACE ":" ";" _tuple "${_tuple}")
    list(GET _tuple 0 _suffix)
    list(GET _tuple 1 _target)

    set(_target "me326_project::${_target}")
    if(NOT TARGET "${_target}")
      # the exported target must exist
      message(WARNING "Package 'me326_project' exports the typesupport target '${_target}' which doesn't exist")
    else()
      list(APPEND me326_project_TARGETS${_suffix} "${_target}")
    endif()
  endforeach()
endif()
