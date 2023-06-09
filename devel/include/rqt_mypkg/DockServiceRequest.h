// Generated by gencpp from file rqt_mypkg/DockServiceRequest.msg
// DO NOT EDIT!


#ifndef RQT_MYPKG_MESSAGE_DOCKSERVICEREQUEST_H
#define RQT_MYPKG_MESSAGE_DOCKSERVICEREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rqt_mypkg
{
template <class ContainerAllocator>
struct DockServiceRequest_
{
  typedef DockServiceRequest_<ContainerAllocator> Type;

  DockServiceRequest_()
    : Dock_Do(false)  {
    }
  DockServiceRequest_(const ContainerAllocator& _alloc)
    : Dock_Do(false)  {
  (void)_alloc;
    }



   typedef uint8_t _Dock_Do_type;
  _Dock_Do_type Dock_Do;





  typedef boost::shared_ptr< ::rqt_mypkg::DockServiceRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rqt_mypkg::DockServiceRequest_<ContainerAllocator> const> ConstPtr;

}; // struct DockServiceRequest_

typedef ::rqt_mypkg::DockServiceRequest_<std::allocator<void> > DockServiceRequest;

typedef boost::shared_ptr< ::rqt_mypkg::DockServiceRequest > DockServiceRequestPtr;
typedef boost::shared_ptr< ::rqt_mypkg::DockServiceRequest const> DockServiceRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rqt_mypkg::DockServiceRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rqt_mypkg::DockServiceRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rqt_mypkg::DockServiceRequest_<ContainerAllocator1> & lhs, const ::rqt_mypkg::DockServiceRequest_<ContainerAllocator2> & rhs)
{
  return lhs.Dock_Do == rhs.Dock_Do;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rqt_mypkg::DockServiceRequest_<ContainerAllocator1> & lhs, const ::rqt_mypkg::DockServiceRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rqt_mypkg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::rqt_mypkg::DockServiceRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rqt_mypkg::DockServiceRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rqt_mypkg::DockServiceRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rqt_mypkg::DockServiceRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rqt_mypkg::DockServiceRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rqt_mypkg::DockServiceRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rqt_mypkg::DockServiceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "176118c4f805289b178b248bb86fc0ac";
  }

  static const char* value(const ::rqt_mypkg::DockServiceRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x176118c4f805289bULL;
  static const uint64_t static_value2 = 0x178b248bb86fc0acULL;
};

template<class ContainerAllocator>
struct DataType< ::rqt_mypkg::DockServiceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rqt_mypkg/DockServiceRequest";
  }

  static const char* value(const ::rqt_mypkg::DockServiceRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rqt_mypkg::DockServiceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool Dock_Do\n"
;
  }

  static const char* value(const ::rqt_mypkg::DockServiceRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rqt_mypkg::DockServiceRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.Dock_Do);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DockServiceRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rqt_mypkg::DockServiceRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rqt_mypkg::DockServiceRequest_<ContainerAllocator>& v)
  {
    s << indent << "Dock_Do: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.Dock_Do);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RQT_MYPKG_MESSAGE_DOCKSERVICEREQUEST_H
