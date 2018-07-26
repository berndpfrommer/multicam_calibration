/* -*-c++-*--------------------------------------------------------------------
 * 2018 Bernd Pfrommer bernd.pfrommer@gmail.com
 */

#include <ros/ros.h>
#include "multicam_calibration/multicam_calibration.h"

int main(int argc, char** argv) {
  ros::init(argc, argv, "calibration_node");
  ros::NodeHandle pnh("~");

  try {
    multicam_calibration::MulticamCalibration node(pnh);
    node.initialize();
    ros::spin();
  } catch (const std::exception& e) {
    ROS_ERROR("%s: %s", pnh.getNamespace().c_str(), e.what());
  }
}
