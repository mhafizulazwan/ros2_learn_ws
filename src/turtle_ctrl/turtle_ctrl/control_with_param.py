import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from rcl_interfaces.msg import SetParametersResult

class TurtleControl(Node):
    def __init__(self):
        super().__init__('turtle_control_param')

        # Declare the parameters
        self.declare_parameter('linear_velocity_scale', 1.0)
        self.declare_parameter('angular_velocity_scale', 1.0)
        self.declare_parameter('max_linear_velocity', 2.0)
        self.declare_parameter('max_angular_velocity', 2.5)

        # Callback function for parameter changes
        self.add_on_set_parameters_callback(self.parameter_callback)

        # Create a publisher and make sure the topic is turtle1
        self.cmd_vel_publisher = self.create_publisher(Twist, 'turtle1/cmd_vel', 10)

        # Get the default values of the parameters
        self.linear_velocity_scale = self.get_parameter('linear_velocity_scale').get_parameter_value().double_value
        self.angular_velocity_scale = self.get_parameter('angular_velocity_scale').get_parameter_value().double_value
        self.max_linear_velocity = self.get_parameter('max_linear_velocity').get_parameter_value().double_value
        self.max_angular_velocity = self.get_parameter('max_angular_velocity').get_parameter_value().double_value

        self.vel_x = 1.0*self.linear_velocity_scale
        self.ang_vel_z = 1.0*self.angular_velocity_scale

        self.timer = self.create_timer(0.1, self.timer_callback)

    def timer_callback(self):
        v = Twist()
        v.linear.x = self.vel_x
        v.angular.z = self.ang_vel_z
        self.cmd_vel_publisher.publish(v)

    def parameter_callback(self, params):
        for param in params:
            if param.name == 'linear_velocity_scale':
                self.linear_velocity_scale = param.value

            elif param.name == 'angular_velocity_scale':
                self.angular_velocity_scale = param.value

            elif param.name == 'max_linear_velocity':
                self.max_linear_velocity = param.value

            elif param.name == 'max_angular_velocity':
                self.max_angular_velocity = param.value

        des_linear_velocity = self.vel_x * self.linear_velocity_scale
        if des_linear_velocity < self.max_linear_velocity:
            self.vel_x = des_linear_velocity

        else:
            self.get_logger().warn('Desired linear velocity exceeds the maximum limit')
        
        des_angular_velocity = self.ang_vel_z * self.angular_velocity_scale
        if des_angular_velocity < self.max_angular_velocity:
            self.ang_vel_z = des_angular_velocity

        else:
            self.get_logger().warn('Desired angular velocity exceeds the maximum limit')

        return SetParametersResult(successful=True)

def main(args=None):
    rclpy.init(args=args)

    turtle_control = TurtleControl()

    rclpy.spin(turtle_control)

    turtle_control.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

