// Generated by gencpp from file duckietown_msgs/SignalsDetectionETHZ17.msg
// DO NOT EDIT!


#ifndef DUCKIETOWN_MSGS_MESSAGE_SIGNALSDETECTIONETHZ17_H
#define DUCKIETOWN_MSGS_MESSAGE_SIGNALSDETECTIONETHZ17_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace duckietown_msgs
{
template <class ContainerAllocator>
struct SignalsDetectionETHZ17_
{
  typedef SignalsDetectionETHZ17_<ContainerAllocator> Type;

  SignalsDetectionETHZ17_()
    : header()
    , led_detected()
    , no_led_detected()  {
    }
  SignalsDetectionETHZ17_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , led_detected(_alloc)
    , no_led_detected(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _led_detected_type;
  _led_detected_type led_detected;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _no_led_detected_type;
  _no_led_detected_type no_led_detected;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(SIGNAL_A)
  #undef SIGNAL_A
#endif
#if defined(_WIN32) && defined(SIGNAL_B)
  #undef SIGNAL_B
#endif
#if defined(_WIN32) && defined(SIGNAL_C)
  #undef SIGNAL_C
#endif
#if defined(_WIN32) && defined(NO_CARS)
  #undef NO_CARS
#endif
#if defined(_WIN32) && defined(CARS)
  #undef CARS
#endif
#if defined(_WIN32) && defined(GO)
  #undef GO
#endif


  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> SIGNAL_A;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> SIGNAL_B;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> SIGNAL_C;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> NO_CARS;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CARS;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> GO;

  typedef boost::shared_ptr< ::duckietown_msgs::SignalsDetectionETHZ17_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::duckietown_msgs::SignalsDetectionETHZ17_<ContainerAllocator> const> ConstPtr;

}; // struct SignalsDetectionETHZ17_

typedef ::duckietown_msgs::SignalsDetectionETHZ17_<std::allocator<void> > SignalsDetectionETHZ17;

typedef boost::shared_ptr< ::duckietown_msgs::SignalsDetectionETHZ17 > SignalsDetectionETHZ17Ptr;
typedef boost::shared_ptr< ::duckietown_msgs::SignalsDetectionETHZ17 const> SignalsDetectionETHZ17ConstPtr;

// constants requiring out of line definition

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      SignalsDetectionETHZ17_<ContainerAllocator>::SIGNAL_A =
        
          "'car_signal_A'"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      SignalsDetectionETHZ17_<ContainerAllocator>::SIGNAL_B =
        
          "'car_signal_B'"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      SignalsDetectionETHZ17_<ContainerAllocator>::SIGNAL_C =
        
          "'car_signal_C'"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      SignalsDetectionETHZ17_<ContainerAllocator>::NO_CARS =
        
          "'no_cars_detected'"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      SignalsDetectionETHZ17_<ContainerAllocator>::CARS =
        
          "'cars_detected'"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      SignalsDetectionETHZ17_<ContainerAllocator>::GO =
        
          "'tl_go'"
        
        ;
   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::duckietown_msgs::SignalsDetectionETHZ17_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::duckietown_msgs::SignalsDetectionETHZ17_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::duckietown_msgs::SignalsDetectionETHZ17_<ContainerAllocator1> & lhs, const ::duckietown_msgs::SignalsDetectionETHZ17_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.led_detected == rhs.led_detected &&
    lhs.no_led_detected == rhs.no_led_detected;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::duckietown_msgs::SignalsDetectionETHZ17_<ContainerAllocator1> & lhs, const ::duckietown_msgs::SignalsDetectionETHZ17_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace duckietown_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::SignalsDetectionETHZ17_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::SignalsDetectionETHZ17_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::SignalsDetectionETHZ17_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::SignalsDetectionETHZ17_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::SignalsDetectionETHZ17_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::SignalsDetectionETHZ17_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::duckietown_msgs::SignalsDetectionETHZ17_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c1b7d3a54f028811e1c3b2366af85c0a";
  }

  static const char* value(const ::duckietown_msgs::SignalsDetectionETHZ17_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc1b7d3a54f028811ULL;
  static const uint64_t static_value2 = 0xe1c3b2366af85c0aULL;
};

template<class ContainerAllocator>
struct DataType< ::duckietown_msgs::SignalsDetectionETHZ17_<ContainerAllocator> >
{
  static const char* value()
  {
    return "duckietown_msgs/SignalsDetectionETHZ17";
  }

  static const char* value(const ::duckietown_msgs::SignalsDetectionETHZ17_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::duckietown_msgs::SignalsDetectionETHZ17_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"\n"
"# this is what we can see at the intersection:\n"
"#string front\n"
"#string right\n"
"#string left \n"
"\n"
"# For the first backoff approach\n"
"string led_detected\n"
"string no_led_detected\n"
"\n"
"# Each of these can be:\n"
"#string NO_CAR='no_car_detected'\n"
"string SIGNAL_A='car_signal_A'\n"
"string SIGNAL_B='car_signal_B'\n"
"string SIGNAL_C='car_signal_C'\n"
"\n"
"string NO_CARS='no_cars_detected'\n"
"string CARS   ='cars_detected'\n"
"\n"
"\n"
"# Plus we can see the traffic light\n"
"\n"
"# for the moment we assume that no traffic light exists\n"
"\n"
"#string traffic_light_state\n"
"\n"
"#string NO_TRAFFIC_LIGHT='no_traffic_light'\n"
"#string STOP='tl_stop'\n"
"string GO='tl_go'\n"
"#string YIELD='tl_yield'\n"
"\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::duckietown_msgs::SignalsDetectionETHZ17_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::duckietown_msgs::SignalsDetectionETHZ17_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.led_detected);
      stream.next(m.no_led_detected);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SignalsDetectionETHZ17_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::duckietown_msgs::SignalsDetectionETHZ17_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::duckietown_msgs::SignalsDetectionETHZ17_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "led_detected: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.led_detected);
    s << indent << "no_led_detected: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.no_led_detected);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DUCKIETOWN_MSGS_MESSAGE_SIGNALSDETECTIONETHZ17_H
