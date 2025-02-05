import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
import time
import math
from action_pkg.action import LinearControl

class LinearMotorControlActionServer(Node):
    def __init__(self):
        super().__init__('linear_motor_control_action_server')
        self._action_server = ActionServer(
            self,
            LinearControl,
            'linear_control',
            self.execute_callback
        )
    
    def execute_callback(self, goal_handle):
        curr_pos = goal_handle.request.initial_position
        goal_pos = goal_handle.request.goal_position
        vel = goal_handle.request.linear_velocity

        dist = math.fabs(curr_pos - goal_pos)
        step_t = 1.0/50.0

        feedback_msg = LinearControl.Feedback()

        while dist > 1e-2:
            if (curr_pos < goal_pos) > 0:
                curr_pos += vel * step_t
            else:
                curr_pos -= vel * step_t

            dist = math.fabs(curr_pos - goal_pos)
            feedback_msg.distance = dist

            goal_handle.publish_feedback(feedback_msg)
            time.sleep(0.02)

        goal_handle.succeed()
        result = LinearControl.Result()
        result.motion_done = True
        return result
    
def main(args=None):
    rclpy.init(args=args)
    linear_motor_control_action_server = LinearMotorControlActionServer()
    rclpy.spin(linear_motor_control_action_server)
    rclpy.shutdown()

if __name__ == '__main__':
    main()





