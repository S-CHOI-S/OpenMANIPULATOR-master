// Generated by gencpp from file open_manipulator_msgs/ManipulatorService.msg
// DO NOT EDIT!


#ifndef OPEN_MANIPULATOR_MSGS_MESSAGE_MANIPULATORSERVICE_H
#define OPEN_MANIPULATOR_MSGS_MESSAGE_MANIPULATORSERVICE_H

#include <ros/service_traits.h>


#include <open_manipulator_msgs/ManipulatorServiceRequest.h>
#include <open_manipulator_msgs/ManipulatorServiceResponse.h>


namespace open_manipulator_msgs
{

struct ManipulatorService
{

typedef ManipulatorServiceRequest Request;
typedef ManipulatorServiceResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ManipulatorService
} // namespace open_manipulator_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::open_manipulator_msgs::ManipulatorService > {
  static const char* value()
  {
    return "e97a16db574d49cc1895dbcce93fb70e";
  }

  static const char* value(const ::open_manipulator_msgs::ManipulatorService&) { return value(); }
};

template<>
struct DataType< ::open_manipulator_msgs::ManipulatorService > {
  static const char* value()
  {
    return "open_manipulator_msgs/ManipulatorService";
  }

  static const char* value(const ::open_manipulator_msgs::ManipulatorService&) { return value(); }
};


// service_traits::MD5Sum< ::open_manipulator_msgs::ManipulatorServiceRequest> should match
// service_traits::MD5Sum< ::open_manipulator_msgs::ManipulatorService >
template<>
struct MD5Sum< ::open_manipulator_msgs::ManipulatorServiceRequest>
{
  static const char* value()
  {
    return MD5Sum< ::open_manipulator_msgs::ManipulatorService >::value();
  }
  static const char* value(const ::open_manipulator_msgs::ManipulatorServiceRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::open_manipulator_msgs::ManipulatorServiceRequest> should match
// service_traits::DataType< ::open_manipulator_msgs::ManipulatorService >
template<>
struct DataType< ::open_manipulator_msgs::ManipulatorServiceRequest>
{
  static const char* value()
  {
    return DataType< ::open_manipulator_msgs::ManipulatorService >::value();
  }
  static const char* value(const ::open_manipulator_msgs::ManipulatorServiceRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::open_manipulator_msgs::ManipulatorServiceResponse> should match
// service_traits::MD5Sum< ::open_manipulator_msgs::ManipulatorService >
template<>
struct MD5Sum< ::open_manipulator_msgs::ManipulatorServiceResponse>
{
  static const char* value()
  {
    return MD5Sum< ::open_manipulator_msgs::ManipulatorService >::value();
  }
  static const char* value(const ::open_manipulator_msgs::ManipulatorServiceResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::open_manipulator_msgs::ManipulatorServiceResponse> should match
// service_traits::DataType< ::open_manipulator_msgs::ManipulatorService >
template<>
struct DataType< ::open_manipulator_msgs::ManipulatorServiceResponse>
{
  static const char* value()
  {
    return DataType< ::open_manipulator_msgs::ManipulatorService >::value();
  }
  static const char* value(const ::open_manipulator_msgs::ManipulatorServiceResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // OPEN_MANIPULATOR_MSGS_MESSAGE_MANIPULATORSERVICE_H
