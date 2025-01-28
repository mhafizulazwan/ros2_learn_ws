# Import ROS2 client library
import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64
import math

# Define a class that inherits from rclpy.node.Node
class SineWavePublisher(Node):

    # Define publisher
    def __init__(self):
        # Call the constructor of the parent class
        super().__init__('sine_wave_publisher')
        
        # Create publisher
        self.publisher = self.create_publisher(Float64, 'sine_wave_signal', 10)
        
        # Call timer function / callback
        self.timer = self.create_timer(0.1, self.timer_callback)
        self.i = 0
    
    # Define timer callback function (sine wave formula)
    def timer_callback(self):
        amplitude = 1.0
        frequency = 1.0
        phi = 0.0
        D = 0.0
        msg = Float64()
        msg.data = amplitude * math.sin(2 * math.pi * frequency * self.i + phi) + D
        self.publisher.publish(msg)
        self.i += 0.1
    
def main(args=None):
    # Initialize ROS client library
    rclpy.init(args=args)

    # Create an instance of the class
    sine_wave_publisher = SineWavePublisher()

    # Spin the node so the callback function is called.
    rclpy.spin(sine_wave_publisher)
    
    # Destroy the node explicitly
    sine_wave_publisher.destroy_node()

    # Shutdown the ROS client library
    rclpy.shutdown()

if __name__ == '__main__':
    main()