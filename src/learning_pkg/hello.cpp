// hello program from tutorial

// header defines standard ROS classes
#include <ros/ros.h>

int main(int argc, char **argv){
    
    // initialize ROS system
    ros::init(argc, argv, "hello_ros");

    // establish program as a ROS node
    ros::NodeHandle nh;

    // send output as log message
    ROS_INFO_STREAM("Hello ROS!");

}