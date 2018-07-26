/* -*-c++-*--------------------------------------------------------------------
 * 2017 Bernd Pfrommer bernd.pfrommer@gmail.com
 *      Kartik Mohta
 */
#include "multicam_calibration/calibration_nodelet.h"

namespace multicam_calibration {
  void CalibrationNodelet::onInit() {
    ros::NodeHandle nh = getPrivateNodeHandle();
    calibration_.reset(new MulticamCalibration(nh));
    calibration_->initialize();
  }
}
