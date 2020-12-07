#!/bin/bash
ls -la
src_dir=pwd
ls -latr /opt/ros/
# set up ROS
source /opt/ros/kinetic/setup.bash

# make workspace
mkdir -p ../catkin_ws/src
pushd ../catkin_ws

# clone and link all packages

git clone https://github.com/catkin/catkin_simple.git src/catkin_simple
git clone --recursive https://github.com/versatran01/apriltag.git src/apriltag
#ln -s $src_dir src/multicam_calibration

catkin config -DCMAKE_BUILD_TYPE=RelWithDebInfo

catkin build

