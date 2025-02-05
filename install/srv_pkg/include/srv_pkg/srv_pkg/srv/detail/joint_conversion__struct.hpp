// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from srv_pkg:srv/JointConversion.idl
// generated code does not contain a copyright notice

#ifndef SRV_PKG__SRV__DETAIL__JOINT_CONVERSION__STRUCT_HPP_
#define SRV_PKG__SRV__DETAIL__JOINT_CONVERSION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'joint_input'
#include "std_msgs/msg/detail/float64__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__srv_pkg__srv__JointConversion_Request __attribute__((deprecated))
#else
# define DEPRECATED__srv_pkg__srv__JointConversion_Request __declspec(deprecated)
#endif

namespace srv_pkg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct JointConversion_Request_
{
  using Type = JointConversion_Request_<ContainerAllocator>;

  explicit JointConversion_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint_input.fill(std_msgs::msg::Float64_<ContainerAllocator>{_init});
    }
  }

  explicit JointConversion_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joint_input(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint_input.fill(std_msgs::msg::Float64_<ContainerAllocator>{_alloc, _init});
    }
  }

  // field types and members
  using _joint_input_type =
    std::array<std_msgs::msg::Float64_<ContainerAllocator>, 7>;
  _joint_input_type joint_input;

  // setters for named parameter idiom
  Type & set__joint_input(
    const std::array<std_msgs::msg::Float64_<ContainerAllocator>, 7> & _arg)
  {
    this->joint_input = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    srv_pkg::srv::JointConversion_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const srv_pkg::srv::JointConversion_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<srv_pkg::srv::JointConversion_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<srv_pkg::srv::JointConversion_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      srv_pkg::srv::JointConversion_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<srv_pkg::srv::JointConversion_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      srv_pkg::srv::JointConversion_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<srv_pkg::srv::JointConversion_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<srv_pkg::srv::JointConversion_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<srv_pkg::srv::JointConversion_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__srv_pkg__srv__JointConversion_Request
    std::shared_ptr<srv_pkg::srv::JointConversion_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__srv_pkg__srv__JointConversion_Request
    std::shared_ptr<srv_pkg::srv::JointConversion_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointConversion_Request_ & other) const
  {
    if (this->joint_input != other.joint_input) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointConversion_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointConversion_Request_

// alias to use template instance with default allocator
using JointConversion_Request =
  srv_pkg::srv::JointConversion_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace srv_pkg


// Include directives for member types
// Member 'joint_output'
// already included above
// #include "std_msgs/msg/detail/float64__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__srv_pkg__srv__JointConversion_Response __attribute__((deprecated))
#else
# define DEPRECATED__srv_pkg__srv__JointConversion_Response __declspec(deprecated)
#endif

namespace srv_pkg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct JointConversion_Response_
{
  using Type = JointConversion_Response_<ContainerAllocator>;

  explicit JointConversion_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint_output.fill(std_msgs::msg::Float64_<ContainerAllocator>{_init});
    }
  }

  explicit JointConversion_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joint_output(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint_output.fill(std_msgs::msg::Float64_<ContainerAllocator>{_alloc, _init});
    }
  }

  // field types and members
  using _joint_output_type =
    std::array<std_msgs::msg::Float64_<ContainerAllocator>, 7>;
  _joint_output_type joint_output;

  // setters for named parameter idiom
  Type & set__joint_output(
    const std::array<std_msgs::msg::Float64_<ContainerAllocator>, 7> & _arg)
  {
    this->joint_output = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    srv_pkg::srv::JointConversion_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const srv_pkg::srv::JointConversion_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<srv_pkg::srv::JointConversion_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<srv_pkg::srv::JointConversion_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      srv_pkg::srv::JointConversion_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<srv_pkg::srv::JointConversion_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      srv_pkg::srv::JointConversion_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<srv_pkg::srv::JointConversion_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<srv_pkg::srv::JointConversion_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<srv_pkg::srv::JointConversion_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__srv_pkg__srv__JointConversion_Response
    std::shared_ptr<srv_pkg::srv::JointConversion_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__srv_pkg__srv__JointConversion_Response
    std::shared_ptr<srv_pkg::srv::JointConversion_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointConversion_Response_ & other) const
  {
    if (this->joint_output != other.joint_output) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointConversion_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointConversion_Response_

// alias to use template instance with default allocator
using JointConversion_Response =
  srv_pkg::srv::JointConversion_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace srv_pkg

namespace srv_pkg
{

namespace srv
{

struct JointConversion
{
  using Request = srv_pkg::srv::JointConversion_Request;
  using Response = srv_pkg::srv::JointConversion_Response;
};

}  // namespace srv

}  // namespace srv_pkg

#endif  // SRV_PKG__SRV__DETAIL__JOINT_CONVERSION__STRUCT_HPP_
