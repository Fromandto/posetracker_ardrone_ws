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
 * Auto-generated by genmsg_cpp from file /root/posetracker_ardrone_workspace/src/ros_keyboard/msg/Key.msg
 *
 */


#ifndef KEYBOARD_MESSAGE_KEY_H
#define KEYBOARD_MESSAGE_KEY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace keyboard
{
template <class ContainerAllocator>
struct Key_
{
  typedef Key_<ContainerAllocator> Type;

  Key_()
    : header()
    , code(0)
    , modifiers(0)  {
    }
  Key_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , code(0)
    , modifiers(0)  {
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint16_t _code_type;
  _code_type code;

   typedef uint16_t _modifiers_type;
  _modifiers_type modifiers;


    enum { KEY_UNKNOWN = 0 };
     enum { KEY_FIRST = 0 };
     enum { KEY_BACKSPACE = 8 };
     enum { KEY_TAB = 9 };
     enum { KEY_CLEAR = 12 };
     enum { KEY_RETURN = 13 };
     enum { KEY_PAUSE = 19 };
     enum { KEY_ESCAPE = 27 };
     enum { KEY_SPACE = 32 };
     enum { KEY_EXCLAIM = 33 };
     enum { KEY_QUOTEDBL = 34 };
     enum { KEY_HASH = 35 };
     enum { KEY_DOLLAR = 36 };
     enum { KEY_AMPERSAND = 38 };
     enum { KEY_QUOTE = 39 };
     enum { KEY_LEFTPAREN = 40 };
     enum { KEY_RIGHTPAREN = 41 };
     enum { KEY_ASTERISK = 42 };
     enum { KEY_PLUS = 43 };
     enum { KEY_COMMA = 44 };
     enum { KEY_MINUS = 45 };
     enum { KEY_PERIOD = 46 };
     enum { KEY_SLASH = 47 };
     enum { KEY_0 = 48 };
     enum { KEY_1 = 49 };
     enum { KEY_2 = 50 };
     enum { KEY_3 = 51 };
     enum { KEY_4 = 52 };
     enum { KEY_5 = 53 };
     enum { KEY_6 = 54 };
     enum { KEY_7 = 55 };
     enum { KEY_8 = 56 };
     enum { KEY_9 = 57 };
     enum { KEY_COLON = 58 };
     enum { KEY_SEMICOLON = 59 };
     enum { KEY_LESS = 60 };
     enum { KEY_EQUALS = 61 };
     enum { KEY_GREATER = 62 };
     enum { KEY_QUESTION = 63 };
     enum { KEY_AT = 64 };
     enum { KEY_LEFTBRACKET = 91 };
     enum { KEY_BACKSLASH = 92 };
     enum { KEY_RIGHTBRACKET = 93 };
     enum { KEY_CARET = 94 };
     enum { KEY_UNDERSCORE = 95 };
     enum { KEY_BACKQUOTE = 96 };
     enum { KEY_a = 97 };
     enum { KEY_b = 98 };
     enum { KEY_c = 99 };
     enum { KEY_d = 100 };
     enum { KEY_e = 101 };
     enum { KEY_f = 102 };
     enum { KEY_g = 103 };
     enum { KEY_h = 104 };
     enum { KEY_i = 105 };
     enum { KEY_j = 106 };
     enum { KEY_k = 107 };
     enum { KEY_l = 108 };
     enum { KEY_m = 109 };
     enum { KEY_n = 110 };
     enum { KEY_o = 111 };
     enum { KEY_p = 112 };
     enum { KEY_q = 113 };
     enum { KEY_r = 114 };
     enum { KEY_s = 115 };
     enum { KEY_t = 116 };
     enum { KEY_u = 117 };
     enum { KEY_v = 118 };
     enum { KEY_w = 119 };
     enum { KEY_x = 120 };
     enum { KEY_y = 121 };
     enum { KEY_z = 122 };
     enum { KEY_DELETE = 127 };
     enum { KEY_WORLD_0 = 160 };
     enum { KEY_WORLD_1 = 161 };
     enum { KEY_WORLD_2 = 162 };
     enum { KEY_WORLD_3 = 163 };
     enum { KEY_WORLD_4 = 164 };
     enum { KEY_WORLD_5 = 165 };
     enum { KEY_WORLD_6 = 166 };
     enum { KEY_WORLD_7 = 167 };
     enum { KEY_WORLD_8 = 168 };
     enum { KEY_WORLD_9 = 169 };
     enum { KEY_WORLD_10 = 170 };
     enum { KEY_WORLD_11 = 171 };
     enum { KEY_WORLD_12 = 172 };
     enum { KEY_WORLD_13 = 173 };
     enum { KEY_WORLD_14 = 174 };
     enum { KEY_WORLD_15 = 175 };
     enum { KEY_WORLD_16 = 176 };
     enum { KEY_WORLD_17 = 177 };
     enum { KEY_WORLD_18 = 178 };
     enum { KEY_WORLD_19 = 179 };
     enum { KEY_WORLD_20 = 180 };
     enum { KEY_WORLD_21 = 181 };
     enum { KEY_WORLD_22 = 182 };
     enum { KEY_WORLD_23 = 183 };
     enum { KEY_WORLD_24 = 184 };
     enum { KEY_WORLD_25 = 185 };
     enum { KEY_WORLD_26 = 186 };
     enum { KEY_WORLD_27 = 187 };
     enum { KEY_WORLD_28 = 188 };
     enum { KEY_WORLD_29 = 189 };
     enum { KEY_WORLD_30 = 190 };
     enum { KEY_WORLD_31 = 191 };
     enum { KEY_WORLD_32 = 192 };
     enum { KEY_WORLD_33 = 193 };
     enum { KEY_WORLD_34 = 194 };
     enum { KEY_WORLD_35 = 195 };
     enum { KEY_WORLD_36 = 196 };
     enum { KEY_WORLD_37 = 197 };
     enum { KEY_WORLD_38 = 198 };
     enum { KEY_WORLD_39 = 199 };
     enum { KEY_WORLD_40 = 200 };
     enum { KEY_WORLD_41 = 201 };
     enum { KEY_WORLD_42 = 202 };
     enum { KEY_WORLD_43 = 203 };
     enum { KEY_WORLD_44 = 204 };
     enum { KEY_WORLD_45 = 205 };
     enum { KEY_WORLD_46 = 206 };
     enum { KEY_WORLD_47 = 207 };
     enum { KEY_WORLD_48 = 208 };
     enum { KEY_WORLD_49 = 209 };
     enum { KEY_WORLD_50 = 210 };
     enum { KEY_WORLD_51 = 211 };
     enum { KEY_WORLD_52 = 212 };
     enum { KEY_WORLD_53 = 213 };
     enum { KEY_WORLD_54 = 214 };
     enum { KEY_WORLD_55 = 215 };
     enum { KEY_WORLD_56 = 216 };
     enum { KEY_WORLD_57 = 217 };
     enum { KEY_WORLD_58 = 218 };
     enum { KEY_WORLD_59 = 219 };
     enum { KEY_WORLD_60 = 220 };
     enum { KEY_WORLD_61 = 221 };
     enum { KEY_WORLD_62 = 222 };
     enum { KEY_WORLD_63 = 223 };
     enum { KEY_WORLD_64 = 224 };
     enum { KEY_WORLD_65 = 225 };
     enum { KEY_WORLD_66 = 226 };
     enum { KEY_WORLD_67 = 227 };
     enum { KEY_WORLD_68 = 228 };
     enum { KEY_WORLD_69 = 229 };
     enum { KEY_WORLD_70 = 230 };
     enum { KEY_WORLD_71 = 231 };
     enum { KEY_WORLD_72 = 232 };
     enum { KEY_WORLD_73 = 233 };
     enum { KEY_WORLD_74 = 234 };
     enum { KEY_WORLD_75 = 235 };
     enum { KEY_WORLD_76 = 236 };
     enum { KEY_WORLD_77 = 237 };
     enum { KEY_WORLD_78 = 238 };
     enum { KEY_WORLD_79 = 239 };
     enum { KEY_WORLD_80 = 240 };
     enum { KEY_WORLD_81 = 241 };
     enum { KEY_WORLD_82 = 242 };
     enum { KEY_WORLD_83 = 243 };
     enum { KEY_WORLD_84 = 244 };
     enum { KEY_WORLD_85 = 245 };
     enum { KEY_WORLD_86 = 246 };
     enum { KEY_WORLD_87 = 247 };
     enum { KEY_WORLD_88 = 248 };
     enum { KEY_WORLD_89 = 249 };
     enum { KEY_WORLD_90 = 250 };
     enum { KEY_WORLD_91 = 251 };
     enum { KEY_WORLD_92 = 252 };
     enum { KEY_WORLD_93 = 253 };
     enum { KEY_WORLD_94 = 254 };
     enum { KEY_WORLD_95 = 255 };
     enum { KEY_KP0 = 256 };
     enum { KEY_KP1 = 257 };
     enum { KEY_KP2 = 258 };
     enum { KEY_KP3 = 259 };
     enum { KEY_KP4 = 260 };
     enum { KEY_KP5 = 261 };
     enum { KEY_KP6 = 262 };
     enum { KEY_KP7 = 263 };
     enum { KEY_KP8 = 264 };
     enum { KEY_KP9 = 265 };
     enum { KEY_KP_PERIOD = 266 };
     enum { KEY_KP_DIVIDE = 267 };
     enum { KEY_KP_MULTIPLY = 268 };
     enum { KEY_KP_MINUS = 269 };
     enum { KEY_KP_PLUS = 270 };
     enum { KEY_KP_ENTER = 271 };
     enum { KEY_KP_EQUALS = 272 };
     enum { KEY_UP = 273 };
     enum { KEY_DOWN = 274 };
     enum { KEY_RIGHT = 275 };
     enum { KEY_LEFT = 276 };
     enum { KEY_INSERT = 277 };
     enum { KEY_HOME = 278 };
     enum { KEY_END = 279 };
     enum { KEY_PAGEUP = 280 };
     enum { KEY_PAGEDOWN = 281 };
     enum { KEY_F1 = 282 };
     enum { KEY_F2 = 283 };
     enum { KEY_F3 = 284 };
     enum { KEY_F4 = 285 };
     enum { KEY_F5 = 286 };
     enum { KEY_F6 = 287 };
     enum { KEY_F7 = 288 };
     enum { KEY_F8 = 289 };
     enum { KEY_F9 = 290 };
     enum { KEY_F10 = 291 };
     enum { KEY_F11 = 292 };
     enum { KEY_F12 = 293 };
     enum { KEY_F13 = 294 };
     enum { KEY_F14 = 295 };
     enum { KEY_F15 = 296 };
     enum { KEY_NUMLOCK = 300 };
     enum { KEY_CAPSLOCK = 301 };
     enum { KEY_SCROLLOCK = 302 };
     enum { KEY_RSHIFT = 303 };
     enum { KEY_LSHIFT = 304 };
     enum { KEY_RCTRL = 305 };
     enum { KEY_LCTRL = 306 };
     enum { KEY_RALT = 307 };
     enum { KEY_LALT = 308 };
     enum { KEY_RMETA = 309 };
     enum { KEY_LMETA = 310 };
     enum { KEY_LSUPER = 311 };
     enum { KEY_RSUPER = 312 };
     enum { KEY_MODE = 313 };
     enum { KEY_COMPOSE = 314 };
     enum { KEY_HELP = 315 };
     enum { KEY_PRINT = 316 };
     enum { KEY_SYSREQ = 317 };
     enum { KEY_BREAK = 318 };
     enum { KEY_MENU = 319 };
     enum { KEY_POWER = 320 };
     enum { KEY_EURO = 321 };
     enum { KEY_UNDO = 322 };
     enum { MODIFIER_NONE = 0 };
     enum { MODIFIER_LSHIFT = 1 };
     enum { MODIFIER_RSHIFT = 2 };
     enum { MODIFIER_LCTRL = 64 };
     enum { MODIFIER_RCTRL = 128 };
     enum { MODIFIER_LALT = 256 };
     enum { MODIFIER_RALT = 512 };
     enum { MODIFIER_LMETA = 1024 };
     enum { MODIFIER_RMETA = 2048 };
     enum { MODIFIER_NUM = 4096 };
     enum { MODIFIER_CAPS = 8192 };
     enum { MODIFIER_MODE = 16384 };
     enum { MODIFIER_RESERVED = 32768 };
 

  typedef boost::shared_ptr< ::keyboard::Key_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::keyboard::Key_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct Key_

typedef ::keyboard::Key_<std::allocator<void> > Key;

typedef boost::shared_ptr< ::keyboard::Key > KeyPtr;
typedef boost::shared_ptr< ::keyboard::Key const> KeyConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::keyboard::Key_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::keyboard::Key_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace keyboard

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/hydro/share/std_msgs/cmake/../msg'], 'keyboard': ['/root/posetracker_ardrone_workspace/src/ros_keyboard/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::keyboard::Key_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::keyboard::Key_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::keyboard::Key_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::keyboard::Key_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::keyboard::Key_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::keyboard::Key_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::keyboard::Key_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5d57616b5631968b8f1d31d23c83281f";
  }

  static const char* value(const ::keyboard::Key_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5d57616b5631968bULL;
  static const uint64_t static_value2 = 0x8f1d31d23c83281fULL;
};

template<class ContainerAllocator>
struct DataType< ::keyboard::Key_<ContainerAllocator> >
{
  static const char* value()
  {
    return "keyboard/Key";
  }

  static const char* value(const ::keyboard::Key_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::keyboard::Key_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint16 KEY_UNKNOWN=0\n\
uint16 KEY_FIRST=0\n\
uint16 KEY_BACKSPACE=8\n\
uint16 KEY_TAB=9\n\
uint16 KEY_CLEAR=12\n\
uint16 KEY_RETURN=13\n\
uint16 KEY_PAUSE=19\n\
uint16 KEY_ESCAPE=27\n\
uint16 KEY_SPACE=32\n\
uint16 KEY_EXCLAIM=33\n\
uint16 KEY_QUOTEDBL=34\n\
uint16 KEY_HASH=35\n\
uint16 KEY_DOLLAR=36\n\
uint16 KEY_AMPERSAND=38\n\
uint16 KEY_QUOTE=39\n\
uint16 KEY_LEFTPAREN=40\n\
uint16 KEY_RIGHTPAREN=41\n\
uint16 KEY_ASTERISK=42\n\
uint16 KEY_PLUS=43\n\
uint16 KEY_COMMA=44\n\
uint16 KEY_MINUS=45\n\
uint16 KEY_PERIOD=46\n\
uint16 KEY_SLASH=47\n\
uint16 KEY_0=48\n\
uint16 KEY_1=49\n\
uint16 KEY_2=50\n\
uint16 KEY_3=51\n\
uint16 KEY_4=52\n\
uint16 KEY_5=53\n\
uint16 KEY_6=54\n\
uint16 KEY_7=55\n\
uint16 KEY_8=56\n\
uint16 KEY_9=57\n\
uint16 KEY_COLON=58\n\
uint16 KEY_SEMICOLON=59\n\
uint16 KEY_LESS=60\n\
uint16 KEY_EQUALS=61\n\
uint16 KEY_GREATER=62\n\
uint16 KEY_QUESTION=63\n\
uint16 KEY_AT=64\n\
uint16 KEY_LEFTBRACKET=91\n\
uint16 KEY_BACKSLASH=92\n\
uint16 KEY_RIGHTBRACKET=93\n\
uint16 KEY_CARET=94\n\
uint16 KEY_UNDERSCORE=95\n\
uint16 KEY_BACKQUOTE=96\n\
uint16 KEY_a=97\n\
uint16 KEY_b=98\n\
uint16 KEY_c=99\n\
uint16 KEY_d=100\n\
uint16 KEY_e=101\n\
uint16 KEY_f=102\n\
uint16 KEY_g=103\n\
uint16 KEY_h=104\n\
uint16 KEY_i=105\n\
uint16 KEY_j=106\n\
uint16 KEY_k=107\n\
uint16 KEY_l=108\n\
uint16 KEY_m=109\n\
uint16 KEY_n=110\n\
uint16 KEY_o=111\n\
uint16 KEY_p=112\n\
uint16 KEY_q=113\n\
uint16 KEY_r=114\n\
uint16 KEY_s=115\n\
uint16 KEY_t=116\n\
uint16 KEY_u=117\n\
uint16 KEY_v=118\n\
uint16 KEY_w=119\n\
uint16 KEY_x=120\n\
uint16 KEY_y=121\n\
uint16 KEY_z=122\n\
uint16 KEY_DELETE=127\n\
uint16 KEY_WORLD_0=160\n\
uint16 KEY_WORLD_1=161\n\
uint16 KEY_WORLD_2=162\n\
uint16 KEY_WORLD_3=163\n\
uint16 KEY_WORLD_4=164\n\
uint16 KEY_WORLD_5=165\n\
uint16 KEY_WORLD_6=166\n\
uint16 KEY_WORLD_7=167\n\
uint16 KEY_WORLD_8=168\n\
uint16 KEY_WORLD_9=169\n\
uint16 KEY_WORLD_10=170\n\
uint16 KEY_WORLD_11=171\n\
uint16 KEY_WORLD_12=172\n\
uint16 KEY_WORLD_13=173\n\
uint16 KEY_WORLD_14=174\n\
uint16 KEY_WORLD_15=175\n\
uint16 KEY_WORLD_16=176\n\
uint16 KEY_WORLD_17=177\n\
uint16 KEY_WORLD_18=178\n\
uint16 KEY_WORLD_19=179\n\
uint16 KEY_WORLD_20=180\n\
uint16 KEY_WORLD_21=181\n\
uint16 KEY_WORLD_22=182\n\
uint16 KEY_WORLD_23=183\n\
uint16 KEY_WORLD_24=184\n\
uint16 KEY_WORLD_25=185\n\
uint16 KEY_WORLD_26=186\n\
uint16 KEY_WORLD_27=187\n\
uint16 KEY_WORLD_28=188\n\
uint16 KEY_WORLD_29=189\n\
uint16 KEY_WORLD_30=190\n\
uint16 KEY_WORLD_31=191\n\
uint16 KEY_WORLD_32=192\n\
uint16 KEY_WORLD_33=193\n\
uint16 KEY_WORLD_34=194\n\
uint16 KEY_WORLD_35=195\n\
uint16 KEY_WORLD_36=196\n\
uint16 KEY_WORLD_37=197\n\
uint16 KEY_WORLD_38=198\n\
uint16 KEY_WORLD_39=199\n\
uint16 KEY_WORLD_40=200\n\
uint16 KEY_WORLD_41=201\n\
uint16 KEY_WORLD_42=202\n\
uint16 KEY_WORLD_43=203\n\
uint16 KEY_WORLD_44=204\n\
uint16 KEY_WORLD_45=205\n\
uint16 KEY_WORLD_46=206\n\
uint16 KEY_WORLD_47=207\n\
uint16 KEY_WORLD_48=208\n\
uint16 KEY_WORLD_49=209\n\
uint16 KEY_WORLD_50=210\n\
uint16 KEY_WORLD_51=211\n\
uint16 KEY_WORLD_52=212\n\
uint16 KEY_WORLD_53=213\n\
uint16 KEY_WORLD_54=214\n\
uint16 KEY_WORLD_55=215\n\
uint16 KEY_WORLD_56=216\n\
uint16 KEY_WORLD_57=217\n\
uint16 KEY_WORLD_58=218\n\
uint16 KEY_WORLD_59=219\n\
uint16 KEY_WORLD_60=220\n\
uint16 KEY_WORLD_61=221\n\
uint16 KEY_WORLD_62=222\n\
uint16 KEY_WORLD_63=223\n\
uint16 KEY_WORLD_64=224\n\
uint16 KEY_WORLD_65=225\n\
uint16 KEY_WORLD_66=226\n\
uint16 KEY_WORLD_67=227\n\
uint16 KEY_WORLD_68=228\n\
uint16 KEY_WORLD_69=229\n\
uint16 KEY_WORLD_70=230\n\
uint16 KEY_WORLD_71=231\n\
uint16 KEY_WORLD_72=232\n\
uint16 KEY_WORLD_73=233\n\
uint16 KEY_WORLD_74=234\n\
uint16 KEY_WORLD_75=235\n\
uint16 KEY_WORLD_76=236\n\
uint16 KEY_WORLD_77=237\n\
uint16 KEY_WORLD_78=238\n\
uint16 KEY_WORLD_79=239\n\
uint16 KEY_WORLD_80=240\n\
uint16 KEY_WORLD_81=241\n\
uint16 KEY_WORLD_82=242\n\
uint16 KEY_WORLD_83=243\n\
uint16 KEY_WORLD_84=244\n\
uint16 KEY_WORLD_85=245\n\
uint16 KEY_WORLD_86=246\n\
uint16 KEY_WORLD_87=247\n\
uint16 KEY_WORLD_88=248\n\
uint16 KEY_WORLD_89=249\n\
uint16 KEY_WORLD_90=250\n\
uint16 KEY_WORLD_91=251\n\
uint16 KEY_WORLD_92=252\n\
uint16 KEY_WORLD_93=253\n\
uint16 KEY_WORLD_94=254\n\
uint16 KEY_WORLD_95=255\n\
uint16 KEY_KP0=256\n\
uint16 KEY_KP1=257\n\
uint16 KEY_KP2=258\n\
uint16 KEY_KP3=259\n\
uint16 KEY_KP4=260\n\
uint16 KEY_KP5=261\n\
uint16 KEY_KP6=262\n\
uint16 KEY_KP7=263\n\
uint16 KEY_KP8=264\n\
uint16 KEY_KP9=265\n\
uint16 KEY_KP_PERIOD=266\n\
uint16 KEY_KP_DIVIDE=267\n\
uint16 KEY_KP_MULTIPLY=268\n\
uint16 KEY_KP_MINUS=269\n\
uint16 KEY_KP_PLUS=270\n\
uint16 KEY_KP_ENTER=271\n\
uint16 KEY_KP_EQUALS=272\n\
uint16 KEY_UP=273\n\
uint16 KEY_DOWN=274\n\
uint16 KEY_RIGHT=275\n\
uint16 KEY_LEFT=276\n\
uint16 KEY_INSERT=277\n\
uint16 KEY_HOME=278\n\
uint16 KEY_END=279\n\
uint16 KEY_PAGEUP=280\n\
uint16 KEY_PAGEDOWN=281\n\
uint16 KEY_F1=282\n\
uint16 KEY_F2=283\n\
uint16 KEY_F3=284\n\
uint16 KEY_F4=285\n\
uint16 KEY_F5=286\n\
uint16 KEY_F6=287\n\
uint16 KEY_F7=288\n\
uint16 KEY_F8=289\n\
uint16 KEY_F9=290\n\
uint16 KEY_F10=291\n\
uint16 KEY_F11=292\n\
uint16 KEY_F12=293\n\
uint16 KEY_F13=294\n\
uint16 KEY_F14=295\n\
uint16 KEY_F15=296\n\
uint16 KEY_NUMLOCK=300\n\
uint16 KEY_CAPSLOCK=301\n\
uint16 KEY_SCROLLOCK=302\n\
uint16 KEY_RSHIFT=303\n\
uint16 KEY_LSHIFT=304\n\
uint16 KEY_RCTRL=305\n\
uint16 KEY_LCTRL=306\n\
uint16 KEY_RALT=307\n\
uint16 KEY_LALT=308\n\
uint16 KEY_RMETA=309\n\
uint16 KEY_LMETA=310\n\
uint16 KEY_LSUPER=311\n\
uint16 KEY_RSUPER=312\n\
uint16 KEY_MODE=313\n\
uint16 KEY_COMPOSE=314\n\
uint16 KEY_HELP=315\n\
uint16 KEY_PRINT=316\n\
uint16 KEY_SYSREQ=317\n\
uint16 KEY_BREAK=318\n\
uint16 KEY_MENU=319\n\
uint16 KEY_POWER=320\n\
uint16 KEY_EURO=321\n\
uint16 KEY_UNDO=322\n\
uint16 MODIFIER_NONE=0\n\
uint16 MODIFIER_LSHIFT=1\n\
uint16 MODIFIER_RSHIFT=2\n\
uint16 MODIFIER_LCTRL=64\n\
uint16 MODIFIER_RCTRL=128\n\
uint16 MODIFIER_LALT=256\n\
uint16 MODIFIER_RALT=512\n\
uint16 MODIFIER_LMETA=1024\n\
uint16 MODIFIER_RMETA=2048\n\
uint16 MODIFIER_NUM=4096\n\
uint16 MODIFIER_CAPS=8192\n\
uint16 MODIFIER_MODE=16384\n\
uint16 MODIFIER_RESERVED=32768\n\
\n\
Header header\n\
uint16 code\n\
uint16 modifiers\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::keyboard::Key_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::keyboard::Key_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.code);
      stream.next(m.modifiers);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct Key_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::keyboard::Key_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::keyboard::Key_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "code: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.code);
    s << indent << "modifiers: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.modifiers);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KEYBOARD_MESSAGE_KEY_H