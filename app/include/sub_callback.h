#pragma once
#include "QuadPositionCmdPubSubTypes.h"
#include "quadcopter_msgs/msgs/QuadPositionCmd.h"

// Subscriber data that needs to be accessed in main
namespace sub {
cpp_msg::QuadPositionCmd grip_cmd;
}  // namespace sub