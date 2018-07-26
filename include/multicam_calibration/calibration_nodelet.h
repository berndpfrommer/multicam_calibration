/* -*-c++-*--------------------------------------------------------------------
 * 2017 Bernd Pfrommer bernd.pfrommer@gmail.com
 *      Kartik Mohta
 */

#ifndef MULTICAM_CALIBRATION_CALIBRATION_NODELET_H
#define MULTICAM_CALIBRATION_CALIBRATION_NODELET_H

#include "multicam_calibration/multicam_calibration.h"
#include <nodelet/nodelet.h>
#include <ros/ros.h>
#include <memory>


namespace multicam_calibration {
  class CalibrationNodelet : public nodelet::Nodelet {
  public:
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW
    void onInit() override;
  private:
    std::unique_ptr<MulticamCalibration> calibration_;
  };
}
#include <pluginlib/class_list_macros.h>
PLUGINLIB_EXPORT_CLASS(multicam_calibration::CalibrationNodelet, nodelet::Nodelet)
#endif
