import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/hafizulazwan/ros2_learn_ws/install/pubsub_py'
