// Generated by gencpp from file gazebo_msgs/GetModelPropertiesResponse.msg
// DO NOT EDIT!


#ifndef GAZEBO_MSGS_MESSAGE_GETMODELPROPERTIESRESPONSE_H
#define GAZEBO_MSGS_MESSAGE_GETMODELPROPERTIESRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace gazebo_msgs
{
template <class ContainerAllocator>
struct GetModelPropertiesResponse_
{
  typedef GetModelPropertiesResponse_<ContainerAllocator> Type;

  GetModelPropertiesResponse_()
    : parent_model_name()
    , canonical_body_name()
    , body_names()
    , geom_names()
    , joint_names()
    , child_model_names()
    , is_static(false)
    , success(false)
    , status_message()  {
    }
  GetModelPropertiesResponse_(const ContainerAllocator& _alloc)
    : parent_model_name(_alloc)
    , canonical_body_name(_alloc)
    , body_names(_alloc)
    , geom_names(_alloc)
    , joint_names(_alloc)
    , child_model_names(_alloc)
    , is_static(false)
    , success(false)
    , status_message(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _parent_model_name_type;
  _parent_model_name_type parent_model_name;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _canonical_body_name_type;
  _canonical_body_name_type canonical_body_name;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> _body_names_type;
  _body_names_type body_names;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> _geom_names_type;
  _geom_names_type geom_names;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> _joint_names_type;
  _joint_names_type joint_names;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> _child_model_names_type;
  _child_model_names_type child_model_names;

   typedef uint8_t _is_static_type;
  _is_static_type is_static;

   typedef uint8_t _success_type;
  _success_type success;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _status_message_type;
  _status_message_type status_message;





  typedef boost::shared_ptr< ::gazebo_msgs::GetModelPropertiesResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gazebo_msgs::GetModelPropertiesResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetModelPropertiesResponse_

typedef ::gazebo_msgs::GetModelPropertiesResponse_<std::allocator<void> > GetModelPropertiesResponse;

typedef boost::shared_ptr< ::gazebo_msgs::GetModelPropertiesResponse > GetModelPropertiesResponsePtr;
typedef boost::shared_ptr< ::gazebo_msgs::GetModelPropertiesResponse const> GetModelPropertiesResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::gazebo_msgs::GetModelPropertiesResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::gazebo_msgs::GetModelPropertiesResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::gazebo_msgs::GetModelPropertiesResponse_<ContainerAllocator1> & lhs, const ::gazebo_msgs::GetModelPropertiesResponse_<ContainerAllocator2> & rhs)
{
  return lhs.parent_model_name == rhs.parent_model_name &&
    lhs.canonical_body_name == rhs.canonical_body_name &&
    lhs.body_names == rhs.body_names &&
    lhs.geom_names == rhs.geom_names &&
    lhs.joint_names == rhs.joint_names &&
    lhs.child_model_names == rhs.child_model_names &&
    lhs.is_static == rhs.is_static &&
    lhs.success == rhs.success &&
    lhs.status_message == rhs.status_message;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::gazebo_msgs::GetModelPropertiesResponse_<ContainerAllocator1> & lhs, const ::gazebo_msgs::GetModelPropertiesResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace gazebo_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::gazebo_msgs::GetModelPropertiesResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gazebo_msgs::GetModelPropertiesResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gazebo_msgs::GetModelPropertiesResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gazebo_msgs::GetModelPropertiesResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gazebo_msgs::GetModelPropertiesResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gazebo_msgs::GetModelPropertiesResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::gazebo_msgs::GetModelPropertiesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b7f370938ef77b464b95f1bab3ec5028";
  }

  static const char* value(const ::gazebo_msgs::GetModelPropertiesResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb7f370938ef77b46ULL;
  static const uint64_t static_value2 = 0x4b95f1bab3ec5028ULL;
};

template<class ContainerAllocator>
struct DataType< ::gazebo_msgs::GetModelPropertiesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gazebo_msgs/GetModelPropertiesResponse";
  }

  static const char* value(const ::gazebo_msgs::GetModelPropertiesResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::gazebo_msgs::GetModelPropertiesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string parent_model_name             # parent model\n"
"string canonical_body_name           # name of canonical body, body names are prefixed by model name, e.g. pr2::base_link\n"
"string[] body_names                  # list of bodies, body names are prefixed by model name, e.g. pr2::base_link\n"
"string[] geom_names                  # list of geoms\n"
"string[] joint_names                 # list of joints attached to the model\n"
"string[] child_model_names           # list of child models\n"
"bool is_static                       # returns true if model is static\n"
"bool success                         # return true if get successful\n"
"string status_message                # comments if available\n"
"\n"
;
  }

  static const char* value(const ::gazebo_msgs::GetModelPropertiesResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::gazebo_msgs::GetModelPropertiesResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.parent_model_name);
      stream.next(m.canonical_body_name);
      stream.next(m.body_names);
      stream.next(m.geom_names);
      stream.next(m.joint_names);
      stream.next(m.child_model_names);
      stream.next(m.is_static);
      stream.next(m.success);
      stream.next(m.status_message);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetModelPropertiesResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gazebo_msgs::GetModelPropertiesResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::gazebo_msgs::GetModelPropertiesResponse_<ContainerAllocator>& v)
  {
    s << indent << "parent_model_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.parent_model_name);
    s << indent << "canonical_body_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.canonical_body_name);
    s << indent << "body_names[]" << std::endl;
    for (size_t i = 0; i < v.body_names.size(); ++i)
    {
      s << indent << "  body_names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.body_names[i]);
    }
    s << indent << "geom_names[]" << std::endl;
    for (size_t i = 0; i < v.geom_names.size(); ++i)
    {
      s << indent << "  geom_names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.geom_names[i]);
    }
    s << indent << "joint_names[]" << std::endl;
    for (size_t i = 0; i < v.joint_names.size(); ++i)
    {
      s << indent << "  joint_names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.joint_names[i]);
    }
    s << indent << "child_model_names[]" << std::endl;
    for (size_t i = 0; i < v.child_model_names.size(); ++i)
    {
      s << indent << "  child_model_names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.child_model_names[i]);
    }
    s << indent << "is_static: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_static);
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "status_message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.status_message);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GAZEBO_MSGS_MESSAGE_GETMODELPROPERTIESRESPONSE_H
