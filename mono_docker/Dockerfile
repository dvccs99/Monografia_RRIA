FROM osrf/ros:melodic-desktop-full-bionic

# nvidia-container-runtime
ENV NVIDIA_VISIBLE_DEVICES \
    ${NVIDIA_VISIBLE_DEVICES:-all}
ENV NVIDIA_DRIVER_CAPABILITIES \
    ${NVIDIA_DRIVER_CAPABILITIES:+$NVIDIA_DRIVER_CAPABILITIES,}graphics

RUN apt-get update
RUN apt-get install -y git nano && apt-get install -y python3-pip python3-wstool
RUN apt-get -y install terminator

RUN sudo apt-get install ros-melodic-controller-interface
RUN sudo apt-get install ros-melodic-gazebo-ros-control
RUN sudo apt-get install ros-melodic-joint-state-controller
RUN sudo apt-get install ros-melodic-effort-controllers
RUN sudo apt-get install ros-melodic-joint-trajectory-controller

RUN sudo apt-get install python3-pip python3-yaml
RUN sudo pip3 install rospkg catkin_pkg


#  Source environments
RUN echo 'source /opt/ros/melodic/setup.bash' >> ~/.bashrc
RUN echo 'source /catkin_ws/devel/setup.bash' >> ~/.bashrc

# Entrypoint
ADD entrypoint.sh /entrypoint.sh
RUN chmod +x /entrypoint.sh

ENTRYPOINT [ "/entrypoint.sh" ]
