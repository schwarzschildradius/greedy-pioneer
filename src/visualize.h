#ifndef VISUALIZE_
#define VISUALIZE_

#include <ros/ros.h>
#include <geometry_msgs/Pose.h>





class Visualizer{
    // private:
    //     double scale_x_;
    //     double scale_y_;
    //     double scale_z_;
    public:
        // Visualizer(double scale_x, double scale_y, double scale_z);
        Visualizer();
        ~Visualizer();
        void setMarkerArray(ros::NodeHandle &nh, std::vector<geometry_msgs::Pose> vizPos, double r, double g, double b, bool deleteArray);
        // void setMarker();
        void deleteMarkerArray(ros::NodeHandle &nh);
};

#endif
