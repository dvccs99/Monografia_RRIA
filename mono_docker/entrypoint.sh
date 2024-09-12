#!/usr/bin/env bash

source /opt/ros/melodic/setup.bash
source /monografia/catkin_ws/devel/setup.bash

if [ $# -gt 0 ];then
    # If we passed a command, run it
    exec "$@"
else
    /bin/bash
fi
