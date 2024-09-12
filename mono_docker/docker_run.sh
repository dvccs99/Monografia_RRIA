xhost si:localuser:root

docker run -it \
           --privileged \
           --name mono_ros \
           --net=host \
           --env="DISPLAY" \
           --volume="/home/dvccs/dev/Monografia_RRIA/catkin_ws:/catkin_ws:rw" \
	   --gpus all \
           --env="QT_X11_NO_MITSHM=1" \
           mono_ros \
           bash
