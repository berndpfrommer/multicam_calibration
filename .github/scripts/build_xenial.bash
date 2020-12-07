#!/bin/bash
ls -la
src_dir=pwd
ls -latr /opt/ros/
# set up ROS
source /opt/ros/xenial/setup.bash

# make workspace
mkdir -p ../catkin_ws/src
pushd ../catkin_ws

# bring necessary workspaces into the picture
git clone https://github.com/catkin/catkin_simple.git src/catkin_simple
ln -s $src_dir src/multicam_calibration

catkin config -DCMAKE_BUILD_TYPE=RelWithDebInfo

catkin build

