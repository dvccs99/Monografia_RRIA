// Generated by gencpp from file spot_msgs/LeaseResource.msg
// DO NOT EDIT!


#ifndef SPOT_MSGS_MESSAGE_LEASERESOURCE_H
#define SPOT_MSGS_MESSAGE_LEASERESOURCE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <spot_msgs/Lease.h>
#include <spot_msgs/LeaseOwner.h>

namespace spot_msgs
{
template <class ContainerAllocator>
struct LeaseResource_
{
  typedef LeaseResource_<ContainerAllocator> Type;

  LeaseResource_()
    : resource()
    , lease()
    , lease_owner()  {
    }
  LeaseResource_(const ContainerAllocator& _alloc)
    : resource(_alloc)
    , lease(_alloc)
    , lease_owner(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _resource_type;
  _resource_type resource;

   typedef  ::spot_msgs::Lease_<ContainerAllocator>  _lease_type;
  _lease_type lease;

   typedef  ::spot_msgs::LeaseOwner_<ContainerAllocator>  _lease_owner_type;
  _lease_owner_type lease_owner;





  typedef boost::shared_ptr< ::spot_msgs::LeaseResource_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::spot_msgs::LeaseResource_<ContainerAllocator> const> ConstPtr;

}; // struct LeaseResource_

typedef ::spot_msgs::LeaseResource_<std::allocator<void> > LeaseResource;

typedef boost::shared_ptr< ::spot_msgs::LeaseResource > LeaseResourcePtr;
typedef boost::shared_ptr< ::spot_msgs::LeaseResource const> LeaseResourceConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::spot_msgs::LeaseResource_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::spot_msgs::LeaseResource_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::spot_msgs::LeaseResource_<ContainerAllocator1> & lhs, const ::spot_msgs::LeaseResource_<ContainerAllocator2> & rhs)
{
  return lhs.resource == rhs.resource &&
    lhs.lease == rhs.lease &&
    lhs.lease_owner == rhs.lease_owner;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::spot_msgs::LeaseResource_<ContainerAllocator1> & lhs, const ::spot_msgs::LeaseResource_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace spot_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::spot_msgs::LeaseResource_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::spot_msgs::LeaseResource_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spot_msgs::LeaseResource_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spot_msgs::LeaseResource_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spot_msgs::LeaseResource_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spot_msgs::LeaseResource_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::spot_msgs::LeaseResource_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e2b2b151bf21111e26403b0a4feba023";
  }

  static const char* value(const ::spot_msgs::LeaseResource_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe2b2b151bf21111eULL;
  static const uint64_t static_value2 = 0x26403b0a4feba023ULL;
};

template<class ContainerAllocator>
struct DataType< ::spot_msgs::LeaseResource_<ContainerAllocator> >
{
  static const char* value()
  {
    return "spot_msgs/LeaseResource";
  }

  static const char* value(const ::spot_msgs::LeaseResource_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::spot_msgs::LeaseResource_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string resource\n"
"Lease lease\n"
"LeaseOwner lease_owner\n"
"\n"
"================================================================================\n"
"MSG: spot_msgs/Lease\n"
"string resource\n"
"string epoch\n"
"uint32[] sequence\n"
"\n"
"================================================================================\n"
"MSG: spot_msgs/LeaseOwner\n"
"string client_name\n"
"string user_name\n"
;
  }

  static const char* value(const ::spot_msgs::LeaseResource_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::spot_msgs::LeaseResource_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.resource);
      stream.next(m.lease);
      stream.next(m.lease_owner);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LeaseResource_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::spot_msgs::LeaseResource_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::spot_msgs::LeaseResource_<ContainerAllocator>& v)
  {
    s << indent << "resource: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.resource);
    s << indent << "lease: ";
    s << std::endl;
    Printer< ::spot_msgs::Lease_<ContainerAllocator> >::stream(s, indent + "  ", v.lease);
    s << indent << "lease_owner: ";
    s << std::endl;
    Printer< ::spot_msgs::LeaseOwner_<ContainerAllocator> >::stream(s, indent + "  ", v.lease_owner);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SPOT_MSGS_MESSAGE_LEASERESOURCE_H
