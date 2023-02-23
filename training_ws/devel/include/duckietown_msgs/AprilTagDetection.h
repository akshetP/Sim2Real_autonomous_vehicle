// Generated by gencpp from file duckietown_msgs/AprilTagDetection.msg
// DO NOT EDIT!


#ifndef DUCKIETOWN_MSGS_MESSAGE_APRILTAGDETECTION_H
#define DUCKIETOWN_MSGS_MESSAGE_APRILTAGDETECTION_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/PoseStamped.h>

namespace duckietown_msgs
{
template <class ContainerAllocator>
struct AprilTagDetection_
{
  typedef AprilTagDetection_<ContainerAllocator> Type;

  AprilTagDetection_()
    : id(0)
    , size(0.0)
    , pose()  {
    }
  AprilTagDetection_(const ContainerAllocator& _alloc)
    : id(0)
    , size(0.0)
    , pose(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _id_type;
  _id_type id;

   typedef double _size_type;
  _size_type size;

   typedef  ::geometry_msgs::PoseStamped_<ContainerAllocator>  _pose_type;
  _pose_type pose;





  typedef boost::shared_ptr< ::duckietown_msgs::AprilTagDetection_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::duckietown_msgs::AprilTagDetection_<ContainerAllocator> const> ConstPtr;

}; // struct AprilTagDetection_

typedef ::duckietown_msgs::AprilTagDetection_<std::allocator<void> > AprilTagDetection;

typedef boost::shared_ptr< ::duckietown_msgs::AprilTagDetection > AprilTagDetectionPtr;
typedef boost::shared_ptr< ::duckietown_msgs::AprilTagDetection const> AprilTagDetectionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::duckietown_msgs::AprilTagDetection_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::duckietown_msgs::AprilTagDetection_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::duckietown_msgs::AprilTagDetection_<ContainerAllocator1> & lhs, const ::duckietown_msgs::AprilTagDetection_<ContainerAllocator2> & rhs)
{
  return lhs.id == rhs.id &&
    lhs.size == rhs.size &&
    lhs.pose == rhs.pose;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::duckietown_msgs::AprilTagDetection_<ContainerAllocator1> & lhs, const ::duckietown_msgs::AprilTagDetection_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace duckietown_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::AprilTagDetection_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::AprilTagDetection_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::AprilTagDetection_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::AprilTagDetection_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::AprilTagDetection_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::AprilTagDetection_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::duckietown_msgs::AprilTagDetection_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c7dd623e54eca222750cda2ae82f5257";
  }

  static const char* value(const ::duckietown_msgs::AprilTagDetection_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc7dd623e54eca222ULL;
  static const uint64_t static_value2 = 0x750cda2ae82f5257ULL;
};

template<class ContainerAllocator>
struct DataType< ::duckietown_msgs::AprilTagDetection_<ContainerAllocator> >
{
  static const char* value()
  {
    return "duckietown_msgs/AprilTagDetection";
  }

  static const char* value(const ::duckietown_msgs::AprilTagDetection_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::duckietown_msgs::AprilTagDetection_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 id\n"
"float64 size\n"
"geometry_msgs/PoseStamped pose\n"
"================================================================================\n"
"MSG: geometry_msgs/PoseStamped\n"
"# A Pose with reference coordinate frame and timestamp\n"
"Header header\n"
"Pose pose\n"
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
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::duckietown_msgs::AprilTagDetection_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::duckietown_msgs::AprilTagDetection_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.size);
      stream.next(m.pose);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AprilTagDetection_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::duckietown_msgs::AprilTagDetection_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::duckietown_msgs::AprilTagDetection_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
    s << indent << "size: ";
    Printer<double>::stream(s, indent + "  ", v.size);
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DUCKIETOWN_MSGS_MESSAGE_APRILTAGDETECTION_H
