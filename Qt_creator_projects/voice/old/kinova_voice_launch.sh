#!/bin/bash

cd $HOME
source /opt/ros/kinetic/setup.bash
source /home/terrin/itia_kinova_ws/devel/setup.bash
gnome-terminal -e "roslaunch itia_kinova kinova_voice_command.launch"

exit 0
