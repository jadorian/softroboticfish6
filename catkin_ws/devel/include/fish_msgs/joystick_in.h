// Generated by gencpp from file fish_msgs/joystick_in.msg
// DO NOT EDIT!


#ifndef FISH_MSGS_MESSAGE_JOYSTICK_IN_H
#define FISH_MSGS_MESSAGE_JOYSTICK_IN_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace fish_msgs
{
template <class ContainerAllocator>
struct joystick_in_
{
  typedef joystick_in_<ContainerAllocator> Type;

  joystick_in_()
    : header()
    , speed_ctrl(0)
    , depth_ctrl(0)
    , yaw_ctrl(0)  {
    }
  joystick_in_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , speed_ctrl(0)
    , depth_ctrl(0)
    , yaw_ctrl(0)  {
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int32_t _speed_ctrl_type;
  _speed_ctrl_type speed_ctrl;

   typedef int32_t _depth_ctrl_type;
  _depth_ctrl_type depth_ctrl;

   typedef int32_t _yaw_ctrl_type;
  _yaw_ctrl_type yaw_ctrl;




  typedef boost::shared_ptr< ::fish_msgs::joystick_in_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::fish_msgs::joystick_in_<ContainerAllocator> const> ConstPtr;

}; // struct joystick_in_

typedef ::fish_msgs::joystick_in_<std::allocator<void> > joystick_in;

typedef boost::shared_ptr< ::fish_msgs::joystick_in > joystick_inPtr;
typedef boost::shared_ptr< ::fish_msgs::joystick_in const> joystick_inConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::fish_msgs::joystick_in_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::fish_msgs::joystick_in_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace fish_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'fish_msgs': ['/home/cyndiac/softroboticfish6/catkin_ws/src/fish_msgs/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::fish_msgs::joystick_in_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::fish_msgs::joystick_in_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::fish_msgs::joystick_in_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::fish_msgs::joystick_in_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::fish_msgs::joystick_in_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::fish_msgs::joystick_in_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::fish_msgs::joystick_in_<ContainerAllocator> >
{
  static const char* value()
  {
    return "18a51ec5fe003c70a52cc607ca16726f";
  }

  static const char* value(const ::fish_msgs::joystick_in_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x18a51ec5fe003c70ULL;
  static const uint64_t static_value2 = 0xa52cc607ca16726fULL;
};

template<class ContainerAllocator>
struct DataType< ::fish_msgs::joystick_in_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fish_msgs/joystick_in";
  }

  static const char* value(const ::fish_msgs::joystick_in_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::fish_msgs::joystick_in_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
int32 speed_ctrl\n\
int32 depth_ctrl\n\
int32 yaw_ctrl\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::fish_msgs::joystick_in_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::fish_msgs::joystick_in_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.speed_ctrl);
      stream.next(m.depth_ctrl);
      stream.next(m.yaw_ctrl);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct joystick_in_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::fish_msgs::joystick_in_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::fish_msgs::joystick_in_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "speed_ctrl: ";
    Printer<int32_t>::stream(s, indent + "  ", v.speed_ctrl);
    s << indent << "depth_ctrl: ";
    Printer<int32_t>::stream(s, indent + "  ", v.depth_ctrl);
    s << indent << "yaw_ctrl: ";
    Printer<int32_t>::stream(s, indent + "  ", v.yaw_ctrl);
  }
};

} // namespace message_operations
} // namespace ros

#endif // FISH_MSGS_MESSAGE_JOYSTICK_IN_H
