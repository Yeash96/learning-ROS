//This is a ROS version of the standard "hello world"
//program.

//This header defines the standatrd ROS classes.
#include <ros/ros.h>

int main(int argc, char **argv){
	//initialize the Ros System.
	ros::init(argc, argv, "hello_ros");

	//Establish this prgram as a ros node.
	ros::NodeHandle nh;

	// Send some output as a log message
	ROS_INFO_STREAM("Hello, ROS!");
}

