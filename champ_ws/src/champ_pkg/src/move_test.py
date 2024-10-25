#! /usr/bin/python3

import rospy
from trajectory_msgs.msg import JointTrajectory
from trajectory_msgs.msg import JointTrajectoryPoint
from sensor_msgs.msg import JointState
from control_msgs.msg import JointTrajectoryControllerState
from std_srvs.srv import Empty
from gazebo_msgs.srv import SetPhysicsProperties
from gazebo_msgs.msg import ODEPhysics
from geometry_msgs.msg import Vector3

class JointTest:
    def __init__(self) -> None:
        self.jointpub = rospy.Publisher(
            '/joint_group_position_controller/command',
            JointTrajectory,
            queue_size=1,
        )

        self.jointsub = rospy.Subscriber(
            '/joint_group_position_controller/state',
            JointTrajectoryControllerState,
            self.callback_js,
            queue_size=1,
        )
        self.reset_simulation = rospy.ServiceProxy('/gazebo/reset_simulation', Empty)

    def move_test(self):
        command = JointTrajectory()
        command.joint_names.extend(['front_left_hip_x', 'front_left_hip_y', 'front_left_knee', 'front_right_hip_x', 'front_right_hip_y', 'front_right_knee', 'rear_left_hip_x', 'rear_left_hip_y', 'rear_left_knee', 'rear_right_hip_x','rear_right_hip_y', 'rear_right_knee'])
        point = JointTrajectoryPoint()
        # point.positions = [0.5,0.5,0,2,0,0,2,0,0,2,0,0]
        point.positions = [-100]*12
        point.time_from_start = rospy.Duration(2)
        command.points.append(point)
        self.jointpub.publish(command)

    def callback_js(self,msg):
        print(msg)
        print("==========================================================================================================================")
        # print(msg.velocity)
        # print(msg.effort)


if __name__ == '__main__':
    rospy.init_node('test_1')
    joint_test = JointTest()
    rospy.sleep(0.5)
    joint_test.reset_simulation()
    