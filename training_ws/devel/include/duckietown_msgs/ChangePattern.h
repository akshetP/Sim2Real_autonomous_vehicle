// Generated by gencpp from file duckietown_msgs/ChangePattern.msg
// DO NOT EDIT!


#ifndef DUCKIETOWN_MSGS_MESSAGE_CHANGEPATTERN_H
#define DUCKIETOWN_MSGS_MESSAGE_CHANGEPATTERN_H

#include <ros/service_traits.h>


#include <duckietown_msgs/ChangePatternRequest.h>
#include <duckietown_msgs/ChangePatternResponse.h>


namespace duckietown_msgs
{

struct ChangePattern
{

typedef ChangePatternRequest Request;
typedef ChangePatternResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ChangePattern
} // namespace duckietown_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::duckietown_msgs::ChangePattern > {
  static const char* value()
  {
    return "678f2d65b1bda577ab0910fd9c7414ba";
  }

  static const char* value(const ::duckietown_msgs::ChangePattern&) { return value(); }
};

template<>
struct DataType< ::duckietown_msgs::ChangePattern > {
  static const char* value()
  {
    return "duckietown_msgs/ChangePattern";
  }

  static const char* value(const ::duckietown_msgs::ChangePattern&) { return value(); }
};


// service_traits::MD5Sum< ::duckietown_msgs::ChangePatternRequest> should match
// service_traits::MD5Sum< ::duckietown_msgs::ChangePattern >
template<>
struct MD5Sum< ::duckietown_msgs::ChangePatternRequest>
{
  static const char* value()
  {
    return MD5Sum< ::duckietown_msgs::ChangePattern >::value();
  }
  static const char* value(const ::duckietown_msgs::ChangePatternRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::duckietown_msgs::ChangePatternRequest> should match
// service_traits::DataType< ::duckietown_msgs::ChangePattern >
template<>
struct DataType< ::duckietown_msgs::ChangePatternRequest>
{
  static const char* value()
  {
    return DataType< ::duckietown_msgs::ChangePattern >::value();
  }
  static const char* value(const ::duckietown_msgs::ChangePatternRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::duckietown_msgs::ChangePatternResponse> should match
// service_traits::MD5Sum< ::duckietown_msgs::ChangePattern >
template<>
struct MD5Sum< ::duckietown_msgs::ChangePatternResponse>
{
  static const char* value()
  {
    return MD5Sum< ::duckietown_msgs::ChangePattern >::value();
  }
  static const char* value(const ::duckietown_msgs::ChangePatternResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::duckietown_msgs::ChangePatternResponse> should match
// service_traits::DataType< ::duckietown_msgs::ChangePattern >
template<>
struct DataType< ::duckietown_msgs::ChangePatternResponse>
{
  static const char* value()
  {
    return DataType< ::duckietown_msgs::ChangePattern >::value();
  }
  static const char* value(const ::duckietown_msgs::ChangePatternResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DUCKIETOWN_MSGS_MESSAGE_CHANGEPATTERN_H
