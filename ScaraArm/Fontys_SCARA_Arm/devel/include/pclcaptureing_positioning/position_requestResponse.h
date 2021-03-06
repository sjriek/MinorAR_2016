// Generated by gencpp from file pclcaptureing_positioning/position_requestResponse.msg
// DO NOT EDIT!


#ifndef PCLCAPTUREING_POSITIONING_MESSAGE_POSITION_REQUESTRESPONSE_H
#define PCLCAPTUREING_POSITIONING_MESSAGE_POSITION_REQUESTRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pclcaptureing_positioning
{
template <class ContainerAllocator>
struct position_requestResponse_
{
  typedef position_requestResponse_<ContainerAllocator> Type;

  position_requestResponse_()
    : success(false)  {
    }
  position_requestResponse_(const ContainerAllocator& _alloc)
    : success(false)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;




  typedef boost::shared_ptr< ::pclcaptureing_positioning::position_requestResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pclcaptureing_positioning::position_requestResponse_<ContainerAllocator> const> ConstPtr;

}; // struct position_requestResponse_

typedef ::pclcaptureing_positioning::position_requestResponse_<std::allocator<void> > position_requestResponse;

typedef boost::shared_ptr< ::pclcaptureing_positioning::position_requestResponse > position_requestResponsePtr;
typedef boost::shared_ptr< ::pclcaptureing_positioning::position_requestResponse const> position_requestResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pclcaptureing_positioning::position_requestResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pclcaptureing_positioning::position_requestResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pclcaptureing_positioning

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pclcaptureing_positioning::position_requestResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pclcaptureing_positioning::position_requestResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pclcaptureing_positioning::position_requestResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pclcaptureing_positioning::position_requestResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pclcaptureing_positioning::position_requestResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pclcaptureing_positioning::position_requestResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pclcaptureing_positioning::position_requestResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const ::pclcaptureing_positioning::position_requestResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x358e233cde0c8a8bULL;
  static const uint64_t static_value2 = 0xcfea4ce193f8fc15ULL;
};

template<class ContainerAllocator>
struct DataType< ::pclcaptureing_positioning::position_requestResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pclcaptureing_positioning/position_requestResponse";
  }

  static const char* value(const ::pclcaptureing_positioning::position_requestResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pclcaptureing_positioning::position_requestResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n\
\n\
";
  }

  static const char* value(const ::pclcaptureing_positioning::position_requestResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pclcaptureing_positioning::position_requestResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct position_requestResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pclcaptureing_positioning::position_requestResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pclcaptureing_positioning::position_requestResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PCLCAPTUREING_POSITIONING_MESSAGE_POSITION_REQUESTRESPONSE_H
