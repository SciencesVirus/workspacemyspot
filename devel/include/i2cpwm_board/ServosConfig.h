// Generated by gencpp from file i2cpwm_board/ServosConfig.msg
// DO NOT EDIT!


#ifndef I2CPWM_BOARD_MESSAGE_SERVOSCONFIG_H
#define I2CPWM_BOARD_MESSAGE_SERVOSCONFIG_H

#include <ros/service_traits.h>


#include <i2cpwm_board/ServosConfigRequest.h>
#include <i2cpwm_board/ServosConfigResponse.h>


namespace i2cpwm_board
{

struct ServosConfig
{

typedef ServosConfigRequest Request;
typedef ServosConfigResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ServosConfig
} // namespace i2cpwm_board


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::i2cpwm_board::ServosConfig > {
  static const char* value()
  {
    return "29a8ed89c4fc7505dd84e9625c298b65";
  }

  static const char* value(const ::i2cpwm_board::ServosConfig&) { return value(); }
};

template<>
struct DataType< ::i2cpwm_board::ServosConfig > {
  static const char* value()
  {
    return "i2cpwm_board/ServosConfig";
  }

  static const char* value(const ::i2cpwm_board::ServosConfig&) { return value(); }
};


// service_traits::MD5Sum< ::i2cpwm_board::ServosConfigRequest> should match
// service_traits::MD5Sum< ::i2cpwm_board::ServosConfig >
template<>
struct MD5Sum< ::i2cpwm_board::ServosConfigRequest>
{
  static const char* value()
  {
    return MD5Sum< ::i2cpwm_board::ServosConfig >::value();
  }
  static const char* value(const ::i2cpwm_board::ServosConfigRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::i2cpwm_board::ServosConfigRequest> should match
// service_traits::DataType< ::i2cpwm_board::ServosConfig >
template<>
struct DataType< ::i2cpwm_board::ServosConfigRequest>
{
  static const char* value()
  {
    return DataType< ::i2cpwm_board::ServosConfig >::value();
  }
  static const char* value(const ::i2cpwm_board::ServosConfigRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::i2cpwm_board::ServosConfigResponse> should match
// service_traits::MD5Sum< ::i2cpwm_board::ServosConfig >
template<>
struct MD5Sum< ::i2cpwm_board::ServosConfigResponse>
{
  static const char* value()
  {
    return MD5Sum< ::i2cpwm_board::ServosConfig >::value();
  }
  static const char* value(const ::i2cpwm_board::ServosConfigResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::i2cpwm_board::ServosConfigResponse> should match
// service_traits::DataType< ::i2cpwm_board::ServosConfig >
template<>
struct DataType< ::i2cpwm_board::ServosConfigResponse>
{
  static const char* value()
  {
    return DataType< ::i2cpwm_board::ServosConfig >::value();
  }
  static const char* value(const ::i2cpwm_board::ServosConfigResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // I2CPWM_BOARD_MESSAGE_SERVOSCONFIG_H
