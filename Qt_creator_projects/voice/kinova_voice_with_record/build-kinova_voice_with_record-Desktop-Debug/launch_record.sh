#!/bin/bash

cd $HOME
source /opt/ros/kinetic/setup.bash
source /home/terrin/itia_kinova_ws/devel/setup.bash
terminator -e "roslaunch itia_kinova write_rostopic.launch"

exit 0
