// Generated by gencpp from file duckietown_msgs/LEDDetectionArray.msg
// DO NOT EDIT!


#ifndef DUCKIETOWN_MSGS_MESSAGE_LEDDETECTIONARRAY_H
#define DUCKIETOWN_MSGS_MESSAGE_LEDDETECTIONARRAY_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <duckietown_msgs/LEDDetection.h>

namespace duckietown_msgs
{
template <class ContainerAllocator>
struct LEDDetectionArray_
{
  typedef LEDDetectionArray_<ContainerAllocator> Type;

  LEDDetectionArray_()
    : detections()  {
    }
  LEDDetectionArray_(const ContainerAllocator& _alloc)
    : detections(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::duckietown_msgs::LEDDetection_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::duckietown_msgs::LEDDetection_<ContainerAllocator> >> _detections_type;
  _detections_type detections;





  typedef boost::shared_ptr< ::duckietown_msgs::LEDDetectionArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::duckietown_msgs::LEDDetectionArray_<ContainerAllocator> const> ConstPtr;

}; // struct LEDDetectionArray_

typedef ::duckietown_msgs::LEDDetectionArray_<std::allocator<void> > LEDDetectionArray;

typedef boost::shared_ptr< ::duckietown_msgs::LEDDetectionArray > LEDDetectionArrayPtr;
typedef boost::shared_ptr< ::duckietown_msgs::LEDDetectionArray const> LEDDetectionArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::duckietown_msgs::LEDDetectionArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::duckietown_msgs::LEDDetectionArray_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::duckietown_msgs::LEDDetectionArray_<ContainerAllocator1> & lhs, const ::duckietown_msgs::LEDDetectionArray_<ContainerAllocator2> & rhs)
{
  return lhs.detections == rhs.detections;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::duckietown_msgs::LEDDetectionArray_<ContainerAllocator1> & lhs, const ::duckietown_msgs::LEDDetectionArray_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace duckietown_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::LEDDetectionArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::LEDDetectionArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::LEDDetectionArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::LEDDetectionArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::LEDDetectionArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::LEDDetectionArray_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::duckietown_msgs::LEDDetectionArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a95456786a73967a5a29fdbf726c022c";
  }

  static const char* value(const ::duckietown_msgs::LEDDetectionArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa95456786a73967aULL;
  static const uint64_t static_value2 = 0x5a29fdbf726c022cULL;
};

template<class ContainerAllocator>
struct DataType< ::duckietown_msgs::LEDDetectionArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "duckietown_msgs/LEDDetectionArray";
  }

  static const char* value(const ::duckietown_msgs::LEDDetectionArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::duckietown_msgs::LEDDetectionArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "LEDDetection[] detections\n"
"================================================================================\n"
"MSG: duckietown_msgs/LEDDetection\n"
"time timestamp1		# initial timestamp of the camera stream used \n"
"time timestamp2		# final timestamp of the camera stream used \n"
"Vector2D pixels_normalized\n"
"float32 frequency \n"
"string color        # will be ‘r’, ‘g’ or ‘b’ \n"
"float32 confidence  # some value of confidence for the detection (TBD)\n"
"\n"
"# for debug/visualization\n"
"float64[] signal_ts\n"
"float32[] signal\n"
"float32[] fft_fs\n"
"float32[] fft\n"
"\n"
"================================================================================\n"
"MSG: duckietown_msgs/Vector2D\n"
"float32 x\n"
"float32 y\n"
;
  }

  static const char* value(const ::duckietown_msgs::LEDDetectionArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::duckietown_msgs::LEDDetectionArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.detections);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LEDDetectionArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::duckietown_msgs::LEDDetectionArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::duckietown_msgs::LEDDetectionArray_<ContainerAllocator>& v)
  {
    s << indent << "detections[]" << std::endl;
    for (size_t i = 0; i < v.detections.size(); ++i)
    {
      s << indent << "  detections[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::duckietown_msgs::LEDDetection_<ContainerAllocator> >::stream(s, indent + "    ", v.detections[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DUCKIETOWN_MSGS_MESSAGE_LEDDETECTIONARRAY_H
