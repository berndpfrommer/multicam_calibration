#!/bin/bash
ls -la
src_dir=pwd

mkdir -p ../catkin_ws/src
pushd ../catkin_ws
catkin config -DCMAKE_BUILD_TYPE=RelWithDebInfo
ln -s $src_dir src/multicam_calibration
catkin build

