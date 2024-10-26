FROM osrf/ros:melodic-desktop-full-bionic

# nvidia-container-runtime
ENV NVIDIA_VISIBLE_DEVICES \
    ${NVIDIA_VISIBLE_DEVICES:-all}
ENV NVIDIA_DRIVER_CAPABILITIES \
    ${NVIDIA_DRIVER_CAPABILITIES:+$NVIDIA_DRIVER_CAPABILITIES,}graphics

RUN apt-get update
RUN apt-get install -y git nano && apt-get install -y python3-pip python3-wstool
RUN sudo apt install -y software-properties-common
RUN sudo add-apt-repository ppa:deadsnakes/ppa
RUN sudo apt update
RUN sudo apt install -y python3.8
RUN sudo apt install -y python3.8-dev
RUN sudo update-alternatives --install /usr/bin/python3 python3 /usr/bin/python3.8 1
RUN apt-get -y install terminator


RUN pip3 install torch==1.13.1 --index-url https://download.pytorch.org/whl/cpu

RUN pip3 install pybind11
RUN pip3 install numpy==1.21.0
RUN pip3 install --upgrade pip setuptools wheel
RUN sudo apt-get install python3-dev
RUN pip3 install pandas
RUN pip3 install stable-baselines3[extra]

RUN sudo apt-get install ros-melodic-controller-interface
RUN sudo apt-get install ros-melodic-gazebo-ros-control
RUN sudo apt-get install ros-melodic-joint-state-controller
RUN sudo apt-get install ros-melodic-effort-controllers
RUN sudo apt-get install ros-melodic-joint-trajectory-controller

RUN sudo apt-get install python3-pip python3-yaml
RUN sudo pip3 install rospkg catkin_pkg

#  Source environments
RUN echo 'source /opt/ros/melodic/setup.bash' >> ~/.bashrc
RUN echo 'source /champ_ws/devel/setup.bash' >> ~/.bashrc

# Entrypoint
ADD entrypoint.sh /entrypoint.sh
RUN chmod +x /entrypoint.sh

ENTRYPOINT [ "/entrypoint.sh" ]

