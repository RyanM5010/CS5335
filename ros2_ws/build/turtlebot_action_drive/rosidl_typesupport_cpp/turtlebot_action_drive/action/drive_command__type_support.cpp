// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from turtlebot_action_drive:action/DriveCommand.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "turtlebot_action_drive/action/detail/drive_command__functions.h"
#include "turtlebot_action_drive/action/detail/drive_command__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace turtlebot_action_drive
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DriveCommand_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DriveCommand_Goal_type_support_ids_t;

static const _DriveCommand_Goal_type_support_ids_t _DriveCommand_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DriveCommand_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DriveCommand_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DriveCommand_Goal_type_support_symbol_names_t _DriveCommand_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, turtlebot_action_drive, action, DriveCommand_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtlebot_action_drive, action, DriveCommand_Goal)),
  }
};

typedef struct _DriveCommand_Goal_type_support_data_t
{
  void * data[2];
} _DriveCommand_Goal_type_support_data_t;

static _DriveCommand_Goal_type_support_data_t _DriveCommand_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DriveCommand_Goal_message_typesupport_map = {
  2,
  "turtlebot_action_drive",
  &_DriveCommand_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_DriveCommand_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_DriveCommand_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DriveCommand_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DriveCommand_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &turtlebot_action_drive__action__DriveCommand_Goal__get_type_hash,
  &turtlebot_action_drive__action__DriveCommand_Goal__get_type_description,
  &turtlebot_action_drive__action__DriveCommand_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace turtlebot_action_drive

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlebot_action_drive::action::DriveCommand_Goal>()
{
  return &::turtlebot_action_drive::action::rosidl_typesupport_cpp::DriveCommand_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, turtlebot_action_drive, action, DriveCommand_Goal)() {
  return get_message_type_support_handle<turtlebot_action_drive::action::DriveCommand_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "turtlebot_action_drive/action/detail/drive_command__functions.h"
// already included above
// #include "turtlebot_action_drive/action/detail/drive_command__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace turtlebot_action_drive
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DriveCommand_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DriveCommand_Result_type_support_ids_t;

static const _DriveCommand_Result_type_support_ids_t _DriveCommand_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DriveCommand_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DriveCommand_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DriveCommand_Result_type_support_symbol_names_t _DriveCommand_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, turtlebot_action_drive, action, DriveCommand_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtlebot_action_drive, action, DriveCommand_Result)),
  }
};

typedef struct _DriveCommand_Result_type_support_data_t
{
  void * data[2];
} _DriveCommand_Result_type_support_data_t;

static _DriveCommand_Result_type_support_data_t _DriveCommand_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DriveCommand_Result_message_typesupport_map = {
  2,
  "turtlebot_action_drive",
  &_DriveCommand_Result_message_typesupport_ids.typesupport_identifier[0],
  &_DriveCommand_Result_message_typesupport_symbol_names.symbol_name[0],
  &_DriveCommand_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DriveCommand_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DriveCommand_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &turtlebot_action_drive__action__DriveCommand_Result__get_type_hash,
  &turtlebot_action_drive__action__DriveCommand_Result__get_type_description,
  &turtlebot_action_drive__action__DriveCommand_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace turtlebot_action_drive

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlebot_action_drive::action::DriveCommand_Result>()
{
  return &::turtlebot_action_drive::action::rosidl_typesupport_cpp::DriveCommand_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, turtlebot_action_drive, action, DriveCommand_Result)() {
  return get_message_type_support_handle<turtlebot_action_drive::action::DriveCommand_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "turtlebot_action_drive/action/detail/drive_command__functions.h"
// already included above
// #include "turtlebot_action_drive/action/detail/drive_command__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace turtlebot_action_drive
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DriveCommand_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DriveCommand_Feedback_type_support_ids_t;

static const _DriveCommand_Feedback_type_support_ids_t _DriveCommand_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DriveCommand_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DriveCommand_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DriveCommand_Feedback_type_support_symbol_names_t _DriveCommand_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, turtlebot_action_drive, action, DriveCommand_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtlebot_action_drive, action, DriveCommand_Feedback)),
  }
};

typedef struct _DriveCommand_Feedback_type_support_data_t
{
  void * data[2];
} _DriveCommand_Feedback_type_support_data_t;

static _DriveCommand_Feedback_type_support_data_t _DriveCommand_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DriveCommand_Feedback_message_typesupport_map = {
  2,
  "turtlebot_action_drive",
  &_DriveCommand_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_DriveCommand_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_DriveCommand_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DriveCommand_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DriveCommand_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &turtlebot_action_drive__action__DriveCommand_Feedback__get_type_hash,
  &turtlebot_action_drive__action__DriveCommand_Feedback__get_type_description,
  &turtlebot_action_drive__action__DriveCommand_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace turtlebot_action_drive

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlebot_action_drive::action::DriveCommand_Feedback>()
{
  return &::turtlebot_action_drive::action::rosidl_typesupport_cpp::DriveCommand_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, turtlebot_action_drive, action, DriveCommand_Feedback)() {
  return get_message_type_support_handle<turtlebot_action_drive::action::DriveCommand_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "turtlebot_action_drive/action/detail/drive_command__functions.h"
// already included above
// #include "turtlebot_action_drive/action/detail/drive_command__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace turtlebot_action_drive
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DriveCommand_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DriveCommand_SendGoal_Request_type_support_ids_t;

static const _DriveCommand_SendGoal_Request_type_support_ids_t _DriveCommand_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DriveCommand_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DriveCommand_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DriveCommand_SendGoal_Request_type_support_symbol_names_t _DriveCommand_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, turtlebot_action_drive, action, DriveCommand_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtlebot_action_drive, action, DriveCommand_SendGoal_Request)),
  }
};

typedef struct _DriveCommand_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _DriveCommand_SendGoal_Request_type_support_data_t;

static _DriveCommand_SendGoal_Request_type_support_data_t _DriveCommand_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DriveCommand_SendGoal_Request_message_typesupport_map = {
  2,
  "turtlebot_action_drive",
  &_DriveCommand_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_DriveCommand_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_DriveCommand_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DriveCommand_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DriveCommand_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &turtlebot_action_drive__action__DriveCommand_SendGoal_Request__get_type_hash,
  &turtlebot_action_drive__action__DriveCommand_SendGoal_Request__get_type_description,
  &turtlebot_action_drive__action__DriveCommand_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace turtlebot_action_drive

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlebot_action_drive::action::DriveCommand_SendGoal_Request>()
{
  return &::turtlebot_action_drive::action::rosidl_typesupport_cpp::DriveCommand_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, turtlebot_action_drive, action, DriveCommand_SendGoal_Request)() {
  return get_message_type_support_handle<turtlebot_action_drive::action::DriveCommand_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "turtlebot_action_drive/action/detail/drive_command__functions.h"
// already included above
// #include "turtlebot_action_drive/action/detail/drive_command__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace turtlebot_action_drive
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DriveCommand_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DriveCommand_SendGoal_Response_type_support_ids_t;

static const _DriveCommand_SendGoal_Response_type_support_ids_t _DriveCommand_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DriveCommand_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DriveCommand_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DriveCommand_SendGoal_Response_type_support_symbol_names_t _DriveCommand_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, turtlebot_action_drive, action, DriveCommand_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtlebot_action_drive, action, DriveCommand_SendGoal_Response)),
  }
};

typedef struct _DriveCommand_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _DriveCommand_SendGoal_Response_type_support_data_t;

static _DriveCommand_SendGoal_Response_type_support_data_t _DriveCommand_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DriveCommand_SendGoal_Response_message_typesupport_map = {
  2,
  "turtlebot_action_drive",
  &_DriveCommand_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_DriveCommand_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_DriveCommand_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DriveCommand_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DriveCommand_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &turtlebot_action_drive__action__DriveCommand_SendGoal_Response__get_type_hash,
  &turtlebot_action_drive__action__DriveCommand_SendGoal_Response__get_type_description,
  &turtlebot_action_drive__action__DriveCommand_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace turtlebot_action_drive

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlebot_action_drive::action::DriveCommand_SendGoal_Response>()
{
  return &::turtlebot_action_drive::action::rosidl_typesupport_cpp::DriveCommand_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, turtlebot_action_drive, action, DriveCommand_SendGoal_Response)() {
  return get_message_type_support_handle<turtlebot_action_drive::action::DriveCommand_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "turtlebot_action_drive/action/detail/drive_command__functions.h"
// already included above
// #include "turtlebot_action_drive/action/detail/drive_command__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace turtlebot_action_drive
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DriveCommand_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DriveCommand_SendGoal_Event_type_support_ids_t;

static const _DriveCommand_SendGoal_Event_type_support_ids_t _DriveCommand_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DriveCommand_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DriveCommand_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DriveCommand_SendGoal_Event_type_support_symbol_names_t _DriveCommand_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, turtlebot_action_drive, action, DriveCommand_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtlebot_action_drive, action, DriveCommand_SendGoal_Event)),
  }
};

typedef struct _DriveCommand_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _DriveCommand_SendGoal_Event_type_support_data_t;

static _DriveCommand_SendGoal_Event_type_support_data_t _DriveCommand_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DriveCommand_SendGoal_Event_message_typesupport_map = {
  2,
  "turtlebot_action_drive",
  &_DriveCommand_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_DriveCommand_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_DriveCommand_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DriveCommand_SendGoal_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DriveCommand_SendGoal_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &turtlebot_action_drive__action__DriveCommand_SendGoal_Event__get_type_hash,
  &turtlebot_action_drive__action__DriveCommand_SendGoal_Event__get_type_description,
  &turtlebot_action_drive__action__DriveCommand_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace turtlebot_action_drive

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlebot_action_drive::action::DriveCommand_SendGoal_Event>()
{
  return &::turtlebot_action_drive::action::rosidl_typesupport_cpp::DriveCommand_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, turtlebot_action_drive, action, DriveCommand_SendGoal_Event)() {
  return get_message_type_support_handle<turtlebot_action_drive::action::DriveCommand_SendGoal_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "turtlebot_action_drive/action/detail/drive_command__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace turtlebot_action_drive
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DriveCommand_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DriveCommand_SendGoal_type_support_ids_t;

static const _DriveCommand_SendGoal_type_support_ids_t _DriveCommand_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DriveCommand_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DriveCommand_SendGoal_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DriveCommand_SendGoal_type_support_symbol_names_t _DriveCommand_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, turtlebot_action_drive, action, DriveCommand_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtlebot_action_drive, action, DriveCommand_SendGoal)),
  }
};

typedef struct _DriveCommand_SendGoal_type_support_data_t
{
  void * data[2];
} _DriveCommand_SendGoal_type_support_data_t;

static _DriveCommand_SendGoal_type_support_data_t _DriveCommand_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DriveCommand_SendGoal_service_typesupport_map = {
  2,
  "turtlebot_action_drive",
  &_DriveCommand_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_DriveCommand_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_DriveCommand_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t DriveCommand_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DriveCommand_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<turtlebot_action_drive::action::DriveCommand_SendGoal_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<turtlebot_action_drive::action::DriveCommand_SendGoal_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<turtlebot_action_drive::action::DriveCommand_SendGoal_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<turtlebot_action_drive::action::DriveCommand_SendGoal>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<turtlebot_action_drive::action::DriveCommand_SendGoal>,
  &turtlebot_action_drive__action__DriveCommand_SendGoal__get_type_hash,
  &turtlebot_action_drive__action__DriveCommand_SendGoal__get_type_description,
  &turtlebot_action_drive__action__DriveCommand_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace turtlebot_action_drive

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<turtlebot_action_drive::action::DriveCommand_SendGoal>()
{
  return &::turtlebot_action_drive::action::rosidl_typesupport_cpp::DriveCommand_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, turtlebot_action_drive, action, DriveCommand_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<turtlebot_action_drive::action::DriveCommand_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "turtlebot_action_drive/action/detail/drive_command__functions.h"
// already included above
// #include "turtlebot_action_drive/action/detail/drive_command__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace turtlebot_action_drive
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DriveCommand_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DriveCommand_GetResult_Request_type_support_ids_t;

static const _DriveCommand_GetResult_Request_type_support_ids_t _DriveCommand_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DriveCommand_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DriveCommand_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DriveCommand_GetResult_Request_type_support_symbol_names_t _DriveCommand_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, turtlebot_action_drive, action, DriveCommand_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtlebot_action_drive, action, DriveCommand_GetResult_Request)),
  }
};

typedef struct _DriveCommand_GetResult_Request_type_support_data_t
{
  void * data[2];
} _DriveCommand_GetResult_Request_type_support_data_t;

static _DriveCommand_GetResult_Request_type_support_data_t _DriveCommand_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DriveCommand_GetResult_Request_message_typesupport_map = {
  2,
  "turtlebot_action_drive",
  &_DriveCommand_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_DriveCommand_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_DriveCommand_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DriveCommand_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DriveCommand_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &turtlebot_action_drive__action__DriveCommand_GetResult_Request__get_type_hash,
  &turtlebot_action_drive__action__DriveCommand_GetResult_Request__get_type_description,
  &turtlebot_action_drive__action__DriveCommand_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace turtlebot_action_drive

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlebot_action_drive::action::DriveCommand_GetResult_Request>()
{
  return &::turtlebot_action_drive::action::rosidl_typesupport_cpp::DriveCommand_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, turtlebot_action_drive, action, DriveCommand_GetResult_Request)() {
  return get_message_type_support_handle<turtlebot_action_drive::action::DriveCommand_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "turtlebot_action_drive/action/detail/drive_command__functions.h"
// already included above
// #include "turtlebot_action_drive/action/detail/drive_command__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace turtlebot_action_drive
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DriveCommand_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DriveCommand_GetResult_Response_type_support_ids_t;

static const _DriveCommand_GetResult_Response_type_support_ids_t _DriveCommand_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DriveCommand_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DriveCommand_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DriveCommand_GetResult_Response_type_support_symbol_names_t _DriveCommand_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, turtlebot_action_drive, action, DriveCommand_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtlebot_action_drive, action, DriveCommand_GetResult_Response)),
  }
};

typedef struct _DriveCommand_GetResult_Response_type_support_data_t
{
  void * data[2];
} _DriveCommand_GetResult_Response_type_support_data_t;

static _DriveCommand_GetResult_Response_type_support_data_t _DriveCommand_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DriveCommand_GetResult_Response_message_typesupport_map = {
  2,
  "turtlebot_action_drive",
  &_DriveCommand_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_DriveCommand_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_DriveCommand_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DriveCommand_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DriveCommand_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &turtlebot_action_drive__action__DriveCommand_GetResult_Response__get_type_hash,
  &turtlebot_action_drive__action__DriveCommand_GetResult_Response__get_type_description,
  &turtlebot_action_drive__action__DriveCommand_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace turtlebot_action_drive

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlebot_action_drive::action::DriveCommand_GetResult_Response>()
{
  return &::turtlebot_action_drive::action::rosidl_typesupport_cpp::DriveCommand_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, turtlebot_action_drive, action, DriveCommand_GetResult_Response)() {
  return get_message_type_support_handle<turtlebot_action_drive::action::DriveCommand_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "turtlebot_action_drive/action/detail/drive_command__functions.h"
// already included above
// #include "turtlebot_action_drive/action/detail/drive_command__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace turtlebot_action_drive
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DriveCommand_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DriveCommand_GetResult_Event_type_support_ids_t;

static const _DriveCommand_GetResult_Event_type_support_ids_t _DriveCommand_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DriveCommand_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DriveCommand_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DriveCommand_GetResult_Event_type_support_symbol_names_t _DriveCommand_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, turtlebot_action_drive, action, DriveCommand_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtlebot_action_drive, action, DriveCommand_GetResult_Event)),
  }
};

typedef struct _DriveCommand_GetResult_Event_type_support_data_t
{
  void * data[2];
} _DriveCommand_GetResult_Event_type_support_data_t;

static _DriveCommand_GetResult_Event_type_support_data_t _DriveCommand_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DriveCommand_GetResult_Event_message_typesupport_map = {
  2,
  "turtlebot_action_drive",
  &_DriveCommand_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_DriveCommand_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_DriveCommand_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DriveCommand_GetResult_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DriveCommand_GetResult_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &turtlebot_action_drive__action__DriveCommand_GetResult_Event__get_type_hash,
  &turtlebot_action_drive__action__DriveCommand_GetResult_Event__get_type_description,
  &turtlebot_action_drive__action__DriveCommand_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace turtlebot_action_drive

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlebot_action_drive::action::DriveCommand_GetResult_Event>()
{
  return &::turtlebot_action_drive::action::rosidl_typesupport_cpp::DriveCommand_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, turtlebot_action_drive, action, DriveCommand_GetResult_Event)() {
  return get_message_type_support_handle<turtlebot_action_drive::action::DriveCommand_GetResult_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "turtlebot_action_drive/action/detail/drive_command__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace turtlebot_action_drive
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DriveCommand_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DriveCommand_GetResult_type_support_ids_t;

static const _DriveCommand_GetResult_type_support_ids_t _DriveCommand_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DriveCommand_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DriveCommand_GetResult_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DriveCommand_GetResult_type_support_symbol_names_t _DriveCommand_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, turtlebot_action_drive, action, DriveCommand_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtlebot_action_drive, action, DriveCommand_GetResult)),
  }
};

typedef struct _DriveCommand_GetResult_type_support_data_t
{
  void * data[2];
} _DriveCommand_GetResult_type_support_data_t;

static _DriveCommand_GetResult_type_support_data_t _DriveCommand_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DriveCommand_GetResult_service_typesupport_map = {
  2,
  "turtlebot_action_drive",
  &_DriveCommand_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_DriveCommand_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_DriveCommand_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t DriveCommand_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DriveCommand_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<turtlebot_action_drive::action::DriveCommand_GetResult_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<turtlebot_action_drive::action::DriveCommand_GetResult_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<turtlebot_action_drive::action::DriveCommand_GetResult_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<turtlebot_action_drive::action::DriveCommand_GetResult>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<turtlebot_action_drive::action::DriveCommand_GetResult>,
  &turtlebot_action_drive__action__DriveCommand_GetResult__get_type_hash,
  &turtlebot_action_drive__action__DriveCommand_GetResult__get_type_description,
  &turtlebot_action_drive__action__DriveCommand_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace turtlebot_action_drive

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<turtlebot_action_drive::action::DriveCommand_GetResult>()
{
  return &::turtlebot_action_drive::action::rosidl_typesupport_cpp::DriveCommand_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, turtlebot_action_drive, action, DriveCommand_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<turtlebot_action_drive::action::DriveCommand_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "turtlebot_action_drive/action/detail/drive_command__functions.h"
// already included above
// #include "turtlebot_action_drive/action/detail/drive_command__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace turtlebot_action_drive
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DriveCommand_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DriveCommand_FeedbackMessage_type_support_ids_t;

static const _DriveCommand_FeedbackMessage_type_support_ids_t _DriveCommand_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DriveCommand_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DriveCommand_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DriveCommand_FeedbackMessage_type_support_symbol_names_t _DriveCommand_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, turtlebot_action_drive, action, DriveCommand_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtlebot_action_drive, action, DriveCommand_FeedbackMessage)),
  }
};

typedef struct _DriveCommand_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _DriveCommand_FeedbackMessage_type_support_data_t;

static _DriveCommand_FeedbackMessage_type_support_data_t _DriveCommand_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DriveCommand_FeedbackMessage_message_typesupport_map = {
  2,
  "turtlebot_action_drive",
  &_DriveCommand_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_DriveCommand_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_DriveCommand_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DriveCommand_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DriveCommand_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &turtlebot_action_drive__action__DriveCommand_FeedbackMessage__get_type_hash,
  &turtlebot_action_drive__action__DriveCommand_FeedbackMessage__get_type_description,
  &turtlebot_action_drive__action__DriveCommand_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace turtlebot_action_drive

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlebot_action_drive::action::DriveCommand_FeedbackMessage>()
{
  return &::turtlebot_action_drive::action::rosidl_typesupport_cpp::DriveCommand_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, turtlebot_action_drive, action, DriveCommand_FeedbackMessage)() {
  return get_message_type_support_handle<turtlebot_action_drive::action::DriveCommand_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "turtlebot_action_drive/action/detail/drive_command__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace turtlebot_action_drive
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t DriveCommand_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL,
  &turtlebot_action_drive__action__DriveCommand__get_type_hash,
  &turtlebot_action_drive__action__DriveCommand__get_type_description,
  &turtlebot_action_drive__action__DriveCommand__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace turtlebot_action_drive

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<turtlebot_action_drive::action::DriveCommand>()
{
  using ::turtlebot_action_drive::action::rosidl_typesupport_cpp::DriveCommand_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  DriveCommand_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::turtlebot_action_drive::action::DriveCommand::Impl::SendGoalService>();
  DriveCommand_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::turtlebot_action_drive::action::DriveCommand::Impl::GetResultService>();
  DriveCommand_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::turtlebot_action_drive::action::DriveCommand::Impl::CancelGoalService>();
  DriveCommand_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::turtlebot_action_drive::action::DriveCommand::Impl::FeedbackMessage>();
  DriveCommand_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::turtlebot_action_drive::action::DriveCommand::Impl::GoalStatusMessage>();
  return &DriveCommand_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, turtlebot_action_drive, action, DriveCommand)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<turtlebot_action_drive::action::DriveCommand>();
}

#ifdef __cplusplus
}
#endif
