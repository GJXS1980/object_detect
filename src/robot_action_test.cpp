/*
 * Copyright (C) 2008, Morgan Quigley and Willow Garage, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *   * Redistributions of source code must retain the above copyright notice,
 *     this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *   * Neither the names of Stanford University or Willow Garage, Inc. nor the names of its
 *     contributors may be used to endorse or promote products derived from
 *     this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#include <ros/ros.h>
#include <std_msgs/String.h>
#include <sstream>

/**
 * This tutorial demonstrates subscribing to a topic using a class method as the callback.
 */

// %Tag(CLASS_WITH_DECLARATION)%
class Listener
{
public:
  std::string copy_data = "init init init";
  int count = 0;
public:
  void callback(const std_msgs::String::ConstPtr& msg);
  void print_data2()
  {
    a = 1;
/*    std::cout << "Copy data is :" << copy_data << "\n";
*/  }
};
// %EndTag(CLASS_WITH_DECLARATION)%

void Listener::callback(const std_msgs::String::ConstPtr& msg)
{
/*  ROS_INFO("I heard: [%s]", msg->data.c_str());
*/  std::stringstream ss;
  ss << msg->data.c_str();
  ss >> copy_data;
/*  std::cout <<"copy_data is: " << copy_data <<"\n";
*/  print_data2();
  ++count;
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "listener_class");
  ros::NodeHandle n;

// %Tag(SUBSCRIBER)%
  Listener listener;
  ros::Subscriber sub = n.subscribe("chatter", 1000, &Listener::callback, &listener);
  ros::Rate loop_rate(10);
// %EndTag(SUBSCRIBER)%
  while(ros::ok() and listener.count <=3){
    ros::spinOnce();
    loop_rate.sleep();
  }
  std::cout << "After spin: \n";
  s = listener.print_data2();

std::cout <<"copy_data is: " << s <<"\n";

  return 0;
}