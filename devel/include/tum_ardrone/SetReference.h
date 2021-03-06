/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by gensrv_cpp from file /root/posetracker_ardrone_workspace/src/tum_ardrone/srv/SetReference.srv
 *
 */


#ifndef TUM_ARDRONE_MESSAGE_SETREFERENCE_H
#define TUM_ARDRONE_MESSAGE_SETREFERENCE_H

#include <ros/service_traits.h>


#include <tum_ardrone/SetReferenceRequest.h>
#include <tum_ardrone/SetReferenceResponse.h>


namespace tum_ardrone
{

struct SetReference
{

typedef SetReferenceRequest Request;
typedef SetReferenceResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetReference
} // namespace tum_ardrone


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::tum_ardrone::SetReference > {
  static const char* value()
  {
    return "ceb0badddcb0258fe3612b618c482acf";
  }

  static const char* value(const ::tum_ardrone::SetReference&) { return value(); }
};

template<>
struct DataType< ::tum_ardrone::SetReference > {
  static const char* value()
  {
    return "tum_ardrone/SetReference";
  }

  static const char* value(const ::tum_ardrone::SetReference&) { return value(); }
};


// service_traits::MD5Sum< ::tum_ardrone::SetReferenceRequest> should match 
// service_traits::MD5Sum< ::tum_ardrone::SetReference > 
template<>
struct MD5Sum< ::tum_ardrone::SetReferenceRequest>
{
  static const char* value()
  {
    return MD5Sum< ::tum_ardrone::SetReference >::value();
  }
  static const char* value(const ::tum_ardrone::SetReferenceRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::tum_ardrone::SetReferenceRequest> should match 
// service_traits::DataType< ::tum_ardrone::SetReference > 
template<>
struct DataType< ::tum_ardrone::SetReferenceRequest>
{
  static const char* value()
  {
    return DataType< ::tum_ardrone::SetReference >::value();
  }
  static const char* value(const ::tum_ardrone::SetReferenceRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::tum_ardrone::SetReferenceResponse> should match 
// service_traits::MD5Sum< ::tum_ardrone::SetReference > 
template<>
struct MD5Sum< ::tum_ardrone::SetReferenceResponse>
{
  static const char* value()
  {
    return MD5Sum< ::tum_ardrone::SetReference >::value();
  }
  static const char* value(const ::tum_ardrone::SetReferenceResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::tum_ardrone::SetReferenceResponse> should match 
// service_traits::DataType< ::tum_ardrone::SetReference > 
template<>
struct DataType< ::tum_ardrone::SetReferenceResponse>
{
  static const char* value()
  {
    return DataType< ::tum_ardrone::SetReference >::value();
  }
  static const char* value(const ::tum_ardrone::SetReferenceResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TUM_ARDRONE_MESSAGE_SETREFERENCE_H
