// Generated by gencpp from file duckietown_msgs/AntiInstagramThresholds.msg
// DO NOT EDIT!


#ifndef DUCKIETOWN_MSGS_MESSAGE_ANTIINSTAGRAMTHRESHOLDS_H
#define DUCKIETOWN_MSGS_MESSAGE_ANTIINSTAGRAMTHRESHOLDS_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace duckietown_msgs
{
template <class ContainerAllocator>
struct AntiInstagramThresholds_
{
  typedef AntiInstagramThresholds_<ContainerAllocator> Type;

  AntiInstagramThresholds_()
    : low()
    , high()  {
      low.assign(0);

      high.assign(0);
  }
  AntiInstagramThresholds_(const ContainerAllocator& _alloc)
    : low()
    , high()  {
  (void)_alloc;
      low.assign(0);

      high.assign(0);
  }



   typedef boost::array<int16_t, 3>  _low_type;
  _low_type low;

   typedef boost::array<int16_t, 3>  _high_type;
  _high_type high;





  typedef boost::shared_ptr< ::duckietown_msgs::AntiInstagramThresholds_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::duckietown_msgs::AntiInstagramThresholds_<ContainerAllocator> const> ConstPtr;

}; // struct AntiInstagramThresholds_

typedef ::duckietown_msgs::AntiInstagramThresholds_<std::allocator<void> > AntiInstagramThresholds;

typedef boost::shared_ptr< ::duckietown_msgs::AntiInstagramThresholds > AntiInstagramThresholdsPtr;
typedef boost::shared_ptr< ::duckietown_msgs::AntiInstagramThresholds const> AntiInstagramThresholdsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::duckietown_msgs::AntiInstagramThresholds_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::duckietown_msgs::AntiInstagramThresholds_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::duckietown_msgs::AntiInstagramThresholds_<ContainerAllocator1> & lhs, const ::duckietown_msgs::AntiInstagramThresholds_<ContainerAllocator2> & rhs)
{
  return lhs.low == rhs.low &&
    lhs.high == rhs.high;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::duckietown_msgs::AntiInstagramThresholds_<ContainerAllocator1> & lhs, const ::duckietown_msgs::AntiInstagramThresholds_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace duckietown_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::AntiInstagramThresholds_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::AntiInstagramThresholds_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::AntiInstagramThresholds_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::AntiInstagramThresholds_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::AntiInstagramThresholds_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::AntiInstagramThresholds_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::duckietown_msgs::AntiInstagramThresholds_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bcde9d2f8b33a444d7909aaaa7563290";
  }

  static const char* value(const ::duckietown_msgs::AntiInstagramThresholds_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbcde9d2f8b33a444ULL;
  static const uint64_t static_value2 = 0xd7909aaaa7563290ULL;
};

template<class ContainerAllocator>
struct DataType< ::duckietown_msgs::AntiInstagramThresholds_<ContainerAllocator> >
{
  static const char* value()
  {
    return "duckietown_msgs/AntiInstagramThresholds";
  }

  static const char* value(const ::duckietown_msgs::AntiInstagramThresholds_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::duckietown_msgs::AntiInstagramThresholds_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int16[3] low\n"
"int16[3] high\n"
;
  }

  static const char* value(const ::duckietown_msgs::AntiInstagramThresholds_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::duckietown_msgs::AntiInstagramThresholds_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.low);
      stream.next(m.high);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AntiInstagramThresholds_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::duckietown_msgs::AntiInstagramThresholds_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::duckietown_msgs::AntiInstagramThresholds_<ContainerAllocator>& v)
  {
    s << indent << "low[]" << std::endl;
    for (size_t i = 0; i < v.low.size(); ++i)
    {
      s << indent << "  low[" << i << "]: ";
      Printer<int16_t>::stream(s, indent + "  ", v.low[i]);
    }
    s << indent << "high[]" << std::endl;
    for (size_t i = 0; i < v.high.size(); ++i)
    {
      s << indent << "  high[" << i << "]: ";
      Printer<int16_t>::stream(s, indent + "  ", v.high[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DUCKIETOWN_MSGS_MESSAGE_ANTIINSTAGRAMTHRESHOLDS_H
