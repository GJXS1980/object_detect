// Generated by gencpp from file object_detect/object_resultRequest.msg
// DO NOT EDIT!


#ifndef OBJECT_DETECT_MESSAGE_OBJECT_RESULTREQUEST_H
#define OBJECT_DETECT_MESSAGE_OBJECT_RESULTREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace object_detect
{
template <class ContainerAllocator>
struct object_resultRequest_
{
  typedef object_resultRequest_<ContainerAllocator> Type;

  object_resultRequest_()
    : center_x(0)
    , center_y(0)
    , distance(0)  {
    }
  object_resultRequest_(const ContainerAllocator& _alloc)
    : center_x(0)
    , center_y(0)
    , distance(0)  {
  (void)_alloc;
    }



   typedef int64_t _center_x_type;
  _center_x_type center_x;

   typedef int64_t _center_y_type;
  _center_y_type center_y;

   typedef int64_t _distance_type;
  _distance_type distance;





  typedef boost::shared_ptr< ::object_detect::object_resultRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::object_detect::object_resultRequest_<ContainerAllocator> const> ConstPtr;

}; // struct object_resultRequest_

typedef ::object_detect::object_resultRequest_<std::allocator<void> > object_resultRequest;

typedef boost::shared_ptr< ::object_detect::object_resultRequest > object_resultRequestPtr;
typedef boost::shared_ptr< ::object_detect::object_resultRequest const> object_resultRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::object_detect::object_resultRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::object_detect::object_resultRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace object_detect

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'object_detect': ['/home/castle/cbot/src/object_detect/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::object_detect::object_resultRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::object_detect::object_resultRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::object_detect::object_resultRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::object_detect::object_resultRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::object_detect::object_resultRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::object_detect::object_resultRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::object_detect::object_resultRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fccae465efac459f703fa37597a1d691";
  }

  static const char* value(const ::object_detect::object_resultRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfccae465efac459fULL;
  static const uint64_t static_value2 = 0x703fa37597a1d691ULL;
};

template<class ContainerAllocator>
struct DataType< ::object_detect::object_resultRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "object_detect/object_resultRequest";
  }

  static const char* value(const ::object_detect::object_resultRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::object_detect::object_resultRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int64 center_x\n\
int64 center_y\n\
int64 distance\n\
";
  }

  static const char* value(const ::object_detect::object_resultRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::object_detect::object_resultRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.center_x);
      stream.next(m.center_y);
      stream.next(m.distance);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct object_resultRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::object_detect::object_resultRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::object_detect::object_resultRequest_<ContainerAllocator>& v)
  {
    s << indent << "center_x: ";
    Printer<int64_t>::stream(s, indent + "  ", v.center_x);
    s << indent << "center_y: ";
    Printer<int64_t>::stream(s, indent + "  ", v.center_y);
    s << indent << "distance: ";
    Printer<int64_t>::stream(s, indent + "  ", v.distance);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OBJECT_DETECT_MESSAGE_OBJECT_RESULTREQUEST_H
