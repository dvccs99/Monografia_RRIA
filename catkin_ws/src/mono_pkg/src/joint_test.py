#! /usr/bin/python3

import rospy
from unitree_legged_msgs.msg import MotorCmd
from sensor_msgs.msg import JointState


# uint8 mode           # motor target mode
# float32 q            # motor target position
# float32 dq           # motor target velocity
# float32 tau          # motor target torque
# float32 Kp           # motor spring stiffness coefficient
# float32 Kd           # motor damper coefficient
# uint32[3] reserve    # motor target torque

class JointTest:
    def __init__(self) -> None:
        self.jointpub = rospy.Publisher(
            '/go1_gazebo/RR_thigh_controller',
            MotorCmd,
            queue_size=1,
        )
        self.jointsub = rospy.Subscriber(
            '/go1_gazebo/RR_thigh_controller',
            MotorCmd,
            self.callback_js,
            queue_size=1,
        )

    def stand_up(self):
        x = []
        test_value = 30
        joint_names =[
            '/go1_gazebo/RR_calf_controller',
            '/go1_gazebo/RR_hip_controller',
            '/go1_gazebo/RR_thigh_controller',
            '/go1_gazebo/RL_calf_controller',
            '/go1_gazebo/RL_hip_controller',
            '/go1_gazebo/RL_thigh_controller',
            '/go1_gazebo/FR_calf_controller',
            '/go1_gazebo/FR_hip_controller',
            '/go1_gazebo/FR_thigh_controller',
            '/go1_gazebo/FL_calf_controller',
            '/go1_gazebo/FL_hip_controller',
            '/go1_gazebo/FL_thigh_controller',
        ]

        command = MotorCmd()
        command.mode = 1
        command.q = test_value
        command.dq = 10
        command.tau = 10
        command.Kp = 10
        command.Kd = 10
        command.reserve = [5,5,5]
        self.jointpub.publish(command)

    def callback_js(self,msg):
        print(msg)
        # print(msg.velocity)
        # print(msg.effort)

if __name__ == '__main__':
    rospy.init_node('stand_up')
    joint_test = JointTest()
    rospy.sleep(0.5)
    joint_test.stand_up()