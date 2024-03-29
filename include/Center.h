// Generated by gencpp from file object_detect/Center.msg
// DO NOT EDIT!


#ifndef OBJECT_DETECT_MESSAGE_CENTER_H
#define OBJECT_DETECT_MESSAGE_CENTER_H

#include <ros/service_traits.h>


#include <object_detect/CenterRequest.h>
#include <object_detect/CenterResponse.h>


namespace object_detect
{

struct Center
{

typedef CenterRequest Request;
typedef CenterResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Center
} // namespace object_detect


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::object_detect::Center > {
  static const char* value()
  {
    return "726def6f0d265b40b13e9551d460a579";
  }

  static const char* value(const ::object_detect::Center&) { return value(); }
};

template<>
struct DataType< ::object_detect::Center > {
  static const char* value()
  {
    return "object_detect/Center";
  }

  static const char* value(const ::object_detect::Center&) { return value(); }
};


// service_traits::MD5Sum< ::object_detect::CenterRequest> should match 
// service_traits::MD5Sum< ::object_detect::Center > 
template<>
struct MD5Sum< ::object_detect::CenterRequest>
{
  static const char* value()
  {
    return MD5Sum< ::object_detect::Center >::value();
  }
  static const char* value(const ::object_detect::CenterRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::object_detect::CenterRequest> should match 
// service_traits::DataType< ::object_detect::Center > 
template<>
struct DataType< ::object_detect::CenterRequest>
{
  static const char* value()
  {
    return DataType< ::object_detect::Center >::value();
  }
  static const char* value(const ::object_detect::CenterRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::object_detect::CenterResponse> should match 
// service_traits::MD5Sum< ::object_detect::Center > 
template<>
struct MD5Sum< ::object_detect::CenterResponse>
{
  static const char* value()
  {
    return MD5Sum< ::object_detect::Center >::value();
  }
  static const char* value(const ::object_detect::CenterResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::object_detect::CenterResponse> should match 
// service_traits::DataType< ::object_detect::Center > 
template<>
struct DataType< ::object_detect::CenterResponse>
{
  static const char* value()
  {
    return DataType< ::object_detect::Center >::value();
  }
  static const char* value(const ::object_detect::CenterResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // OBJECT_DETECT_MESSAGE_CENTER_H
