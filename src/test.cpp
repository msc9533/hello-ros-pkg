#include "ros/ros.h"
int main(int argc, char **argv)
{
    ros::init(argc, argv, "test");
    ROS_INFO("Hello ROS!");
    return 0;
}

