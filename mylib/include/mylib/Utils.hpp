// Copyright 2020 Intelligent Robotics Lab
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef MYLIB__UTILS_HPP_
#define MYLIB__UTILS_HPP_

#include "rclcpp_lifecycle/lifecycle_node.hpp"

#include "mylib_base/UtilsBase.hpp"

namespace mylib
{

class Plugin : public mylib_base::PluginBase
{
public:
  Plugin();
  explicit Plugin(int init);
  int get_secret();
};

bool get_true();
int duplicate(int x);
rclcpp::Time get_time(rclcpp_lifecycle::LifecycleNode::SharedPtr node);

}  // namespace mylib

#endif  // MYLIB__UTILS_HPP_
