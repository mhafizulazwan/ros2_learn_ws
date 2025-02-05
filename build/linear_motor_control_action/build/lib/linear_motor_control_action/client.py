import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Pose
from action_pkg.action import LinearControl
from rclpy.action import ActionClient

class LinearControlClient(Node):
    def __init__(self):
        super().__init__('linear_control_client')
        self._action_client = ActionClient(self, LinearControl, 'linear_control')

    def send_goal(self, initial_position, goal_position, linear_velocity):
        goal_msg = LinearControl.Goal()
        goal_msg.initial_position = initial_position
        goal_msg.goal_position = goal_position
        goal_msg.linear_velocity = linear_velocity
        self._action_client.wait_for_server()

        self._send_goal_future = self._action_client.send_goal_async(goal_msg, feedback_callback=self.feedback_callback)
        self._send_goal_future.add_done_callback(self.goal_response_callback)

    # To check if the goal was accepted or rejected
    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected :(')
            return
        self.get_logger().info('Goal accepted :)')
        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

    # To check if the goal was successful or not
    def get_result_callback(self, future):
        result = future.result().result
        self.get_logger().info('Result: {0}'.format(result.motion_done))
        rclpy.shutdown()

    # To get feedback from the server
    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        self.get_logger().info('Distance to goal: {0}'.format(feedback.distance))

def main(args=None):
    rclpy.init(args=args)
    linear_control_client = LinearControlClient()
    linear_control_client.send_goal(0.0, 1.7, 0.2)
    rclpy.spin(linear_control_client)

if __name__ == '__main__':
    main()