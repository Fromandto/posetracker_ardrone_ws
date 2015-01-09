#include "ros/ros.h"
#include "std_msgs/String.h"
#include <ardrone_autonomy/Navdata.h>
#include <geometry_msgs/Twist.h>
#include <geometry_msgs/PoseWithCovarianceStamped.h>
#include <std_msgs/Empty.h>
#include <opencv/cv.h>
#include <opencv/highgui.h>

#define integral_num 5
#define integral_num_h 3

using namespace cv;

char command = 't';
int current_high = 0;
float current_vx = 0.0;
float current_vy = 0.0;
float rotX = 0.0;
float rotY = 0.0;
float rotZ = 0.0;
float speed = 0.25;

int z_err[integral_num_h] = {0};
int z_integral;

geometry_msgs::Twist twist_msg;
std_msgs::Empty emp_msg;

void poseCallback(const geometry_msgs::PoseWithCovarianceStamped &msg_in);
void navCallback(const ardrone_autonomy::Navdata &msg_in);
void kbCallback(const geometry_msgs::Twist &msg_in);
void high_con(int expect);

int main(int argc , char ** argv)
{
	ros::init(argc , argv , "posetracker_ardrone");
	ros::NodeHandle node;
	ros::Subscriber nav_sub = node.subscribe("/ardrone/navdata" , 1 , navCallback);
	ros::Subscriber kb_sub = node.subscribe("/keyboard" , 1 , kbCallback);
	ros::Subscriber pose_sub = node.subscribe("/estimated_pose" , 1 , poseCallback);
	ros::Rate loop_rate(25);
	ros::Publisher pub_empty_land;
	ros::Publisher pub_empty_takeoff;
	ros::Publisher pub_empty_reset;
	ros::Publisher pub_twist;

	pub_twist = node.advertise<geometry_msgs::Twist>("cmd_vel" , 1);
	pub_empty_takeoff = node.advertise<std_msgs::Empty>("ardrone/takeoff" , 1);
	pub_empty_land = node.advertise<std_msgs::Empty>("ardrone/land" , 1);
	pub_empty_reset = node.advertise<std_msgs::Empty>("ardrone/reset" , 1);

	double takeoff_time = 2.0;
	double land_time = 3.0;
	int expect_high = 500;
	int extra = 10;

	twist_msg.linear.x = 0.0;
	twist_msg.linear.y = 0.0;
	twist_msg.linear.z = 0.0;
	twist_msg.angular.x = 0.0;
	twist_msg.angular.y = 0.0;
	twist_msg.angular.z = 0.0;
	double start_time = (double)ros::Time::now().toSec();
	while((double)ros::Time::now().toSec() < start_time + 2.0)
	{
		pub_empty_reset.publish(emp_msg);
		ROS_INFO("reseting");
		loop_rate.sleep();
	}

	start_time = (double)ros::Time::now().toSec();
	ROS_INFO("takeoff\n");
	while((double)ros::Time::now().toSec() < start_time + takeoff_time)
	{
		pub_empty_takeoff.publish(emp_msg);
		ros::spinOnce();
		loop_rate.sleep();
		//ROS_INFO("takeoff expected : %d" , expect_high);
		//ROS_INFO("takeoff current : %d" , current_high);
	}
	ROS_INFO("altd control\n");
	/*while(ros::ok())
	{
		twist_msg.linear.x = -current_vx/3000.0;
		twist_msg.linear.y = -current_vy/3000.0;
		if(current_high < expect_high - extra)
		{
			twist_msg.linear.z = 0.25;
			pub_twist.publish(twist_msg);
		}
		else if(current_high > expect_high + extra)
		{
			twist_msg.linear.z = -0.25;
			pub_twist.publish(twist_msg);
		}
		else
		{
			twist_msg.linear.z = 0.0;
			pub_twist.publish(twist_msg);
			ROS_INFO("hover");
			break;
		}
		ROS_INFO("altd expect : %d" , expect_high);
		ROS_INFO("altd current : %d" , current_high);
		ros::spinOnce();
		loop_rate.sleep();
	}*/
	ROS_INFO("controlling");
	while(1)
	{
		twist_msg.linear.x = 0.0;
		twist_msg.linear.y = 0.0;
		twist_msg.linear.z = 0.0;
		twist_msg.angular.x = 0.0;
		twist_msg.angular.y = 0.0;
		twist_msg.angular.z = 0.0;
		ROS_INFO("%c" , command);
		if(command != 't')
		{
			if(command == 'K')
			{
				break;
			}
			if(command == 'I')
			{
				twist_msg.linear.x = speed;
				twist_msg.linear.y = 0.0;
				twist_msg.linear.z = 0.0;
			}
			if(command == ',')
			{
				twist_msg.linear.x = -speed;
				twist_msg.linear.y = 0.0;
				twist_msg.linear.z = 0.0;
			}
			if(command == 'J')
			{
				twist_msg.linear.x = 0.0;
				twist_msg.linear.y = speed;
				twist_msg.linear.z = 0.0;
			}
			if(command == 'L')
			{
				twist_msg.linear.x = 0.0;
				twist_msg.linear.y = -speed;
				twist_msg.linear.z = 0.0;
			}
			if(command == 'U')
			{
				twist_msg.linear.x = 0.0;
				twist_msg.linear.y = 0.0;
				twist_msg.linear.z = speed;
			}
			if(command == 'O')
			{
				twist_msg.linear.x = 0.0;
				twist_msg.linear.y = 0.0;
				twist_msg.linear.z = -speed;
			}
			command = 't';
		}
		pub_twist.publish(twist_msg);
		ros::spinOnce();
		loop_rate.sleep();
	}
	/*while(c!='a')
	{
		//high_con(expect_high);
		c = cv::waitKey(10);
		ROS_INFO("controlling %d" , c);
		/*if(c == '-')
		{
			expect_high -= 100;
		}
		if(c == '=')
		{
			expect_high += 100;
		}
		twist_msg.linear.x = -current_vx / 3000.0;
		twist_msg.linear.y = -current_vy / 3000.0;
		twist_msg.linear.z = 0.0;
		pub_twist.publish(twist_msg);
		//ROS_INFO("controlling expect : %d" , expect_high);
		//ROS_INFO("controlling current : %d" , current_high);	
		ros::spinOnce();
		loop_rate.sleep();
	}*/
	start_time = (double)ros::Time::now().toSec();
	ROS_INFO("landing\n");
	while((double)ros::Time::now().toSec() > start_time)
	{
		pub_empty_land.publish(emp_msg);
		if((double)ros::Time::now().toSec() > start_time + land_time)
		{
			ROS_INFO("Closing Node");
			exit(0);
		}
		ros::spinOnce();
		loop_rate.sleep();
	}
	return 1;
}

void poseCallback(const geometry_msgs::PoseWithCovarianceStamped &msg_in)
{
	if(msg_in.pose.pose.orientation.x < 0.45)
	{
		command = 'J';
	}
	if(msg_in.pose.pose.orientation.x > 0.75)
	{
		command = 'L';
	}
	if(msg_in.pose.pose.orientation.z > 0.15 && msg_in.pose.pose.orientation.w < -0.15)
	{
		command = 'I';
	}
	if(msg_in.pose.pose.orientation.z < -0.15 && msg_in.pose.pose.orientation.w > 0.15)
	{
		command = ',';
	}
}

void kbCallback(const geometry_msgs::Twist &msg_in)
{
	if(msg_in.linear.x == 0.0 && msg_in.angular.z == 0.0)
	{
		//ROS_INFO("%c" , 'U');
		command = 'K';
	}
	if(msg_in.linear.x == 0.5 && msg_in.angular.z == 1.0)
	{
		//ROS_INFO("%c" , 'U');
		command = 'U';
	}
	if(msg_in.linear.x == 0.5 && msg_in.angular.z == -1.0)
	{
		//ROS_INFO("%c" , 'O');
		command = 'O';
	}
	if(msg_in.linear.x == 0.5 && msg_in.angular.z == 0.0)
	{
		//ROS_INFO("%c" , 'I');
		command = 'I';
	}
	if(msg_in.linear.x == -0.5 && msg_in.angular.z == 0.0)
	{
		//ROS_INFO("%c" , ',');
		command = ',';
	}
	if(msg_in.linear.x == 0.0 && msg_in.angular.z == 1.0)
	{
		//ROS_INFO("%c" , 'J');
		command = 'J';
	}
	if(msg_in.linear.x == 0.0 && msg_in.angular.z == -1.0)
	{
		//ROS_INFO("%c" , 'L');
		command = 'L';
	}
}

void navCallback(const ardrone_autonomy::Navdata &msg_in)
{
	for(int i = 0 ; i < integral_num_h - 1 ; i ++)
	{
		z_err[i] = z_err[i + 1];
	}
	z_err[integral_num_h - 1] = msg_in.altd;
	current_high = msg_in.altd;
	current_vx = msg_in.vx;
	current_vy = msg_in.vy;
	rotX = msg_in.rotX;
	rotY = msg_in.rotY;
	rotZ = msg_in.rotZ;
}

void high_con(int expect)
{
	float kp = 1.0 / 3000.0;
	float ki = 1.0 / 3000.0;
	float kd = 1.0 / 1000.0;

	z_integral = 0;
	for(int i = 0 ; i < integral_num_h ; i ++)
	{
		z_integral += z_err[i] - expect;
	}
	int D = current_high - z_err[integral_num_h - 2];
	int P = current_high - expect;

	twist_msg.linear.z = -kp*P - ki*z_integral - kd*D;
}
