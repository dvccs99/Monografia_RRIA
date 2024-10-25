// Generated by gencpp from file spot_msgs/BatteryStateArray.msg
// DO NOT EDIT!


#ifndef SPOT_MSGS_MESSAGE_BATTERYSTATEARRAY_H
#define SPOT_MSGS_MESSAGE_BATTERYSTATEARRAY_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <spot_msgs/BatteryState.h>

namespace spot_msgs
{
template <class ContainerAllocator>
struct BatteryStateArray_
{
  typedef BatteryStateArray_<ContainerAllocator> Type;

  BatteryStateArray_()
    : battery_states()  {
    }
  BatteryStateArray_(const ContainerAllocator& _alloc)
    : battery_states(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::spot_msgs::BatteryState_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::spot_msgs::BatteryState_<ContainerAllocator> >> _battery_states_type;
  _battery_states_type battery_states;





  typedef boost::shared_ptr< ::spot_msgs::BatteryStateArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::spot_msgs::BatteryStateArray_<ContainerAllocator> const> ConstPtr;

}; // struct BatteryStateArray_

typedef ::spot_msgs::BatteryStateArray_<std::allocator<void> > BatteryStateArray;

typedef boost::shared_ptr< ::spot_msgs::BatteryStateArray > BatteryStateArrayPtr;
typedef boost::shared_ptr< ::spot_msgs::BatteryStateArray const> BatteryStateArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::spot_msgs::BatteryStateArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::spot_msgs::BatteryStateArray_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::spot_msgs::BatteryStateArray_<ContainerAllocator1> & lhs, const ::spot_msgs::BatteryStateArray_<ContainerAllocator2> & rhs)
{
  return lhs.battery_states == rhs.battery_states;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::spot_msgs::BatteryStateArray_<ContainerAllocator1> & lhs, const ::spot_msgs::BatteryStateArray_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace spot_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::spot_msgs::BatteryStateArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::spot_msgs::BatteryStateArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spot_msgs::BatteryStateArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spot_msgs::BatteryStateArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spot_msgs::BatteryStateArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spot_msgs::BatteryStateArray_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::spot_msgs::BatteryStateArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5be00bcb9a392f14ba6707e020a94106";
  }

  static const char* value(const ::spot_msgs::BatteryStateArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5be00bcb9a392f14ULL;
  static const uint64_t static_value2 = 0xba6707e020a94106ULL;
};

template<class ContainerAllocator>
struct DataType< ::spot_msgs::BatteryStateArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "spot_msgs/BatteryStateArray";
  }

  static const char* value(const ::spot_msgs::BatteryStateArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::spot_msgs::BatteryStateArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "BatteryState[] battery_states\n"
"\n"
"================================================================================\n"
"MSG: spot_msgs/BatteryState\n"
"# Status\n"
"uint8 STATUS_UNKNOWN = 0\n"
"uint8 STATUS_MISSING = 1\n"
"uint8 STATUS_CHARGING = 2\n"
"uint8 STATUS_DISCHARGING = 3\n"
"uint8 STATUS_BOOTING = 4\n"
"\n"
"Header header\n"
"string identifier\n"
"float64 charge_percentage\n"
"duration estimated_runtime\n"
"float64 current\n"
"float64 voltage\n"
"float64[] temperatures\n"
"uint8 status\n"
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

  static const char* value(const ::spot_msgs::BatteryStateArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::spot_msgs::BatteryStateArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.battery_states);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BatteryStateArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::spot_msgs::BatteryStateArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::spot_msgs::BatteryStateArray_<ContainerAllocator>& v)
  {
    s << indent << "battery_states[]" << std::endl;
    for (size_t i = 0; i < v.battery_states.size(); ++i)
    {
      s << indent << "  battery_states[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::spot_msgs::BatteryState_<ContainerAllocator> >::stream(s, indent + "    ", v.battery_states[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SPOT_MSGS_MESSAGE_BATTERYSTATEARRAY_H
