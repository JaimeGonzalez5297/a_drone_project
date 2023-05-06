#!/usr/bin/env python

import rospy
from sensor_msgs.msg import CameraInfo

def camera_info_callback(msg):
    print("Camera calibration parameters:")
    print("Focal length: ", msg.K[0])
    print("Principal point x-coordinate: ", msg.K[2])
    print("Principal point y-coordinate: ", msg.K[5])
    print("Distortion coefficients: ", msg.D)

if __name__ == '__main__':
    rospy.init_node('camera_info_subscriber')
    rospy.Subscriber('/mavros/camera_info', CameraInfo, camera_info_callback)
    rospy.spin()
