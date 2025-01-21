# Import ROS2 client library
import rclpy
from rclpy.node import Node

# Define a class that inherits from rclpy.node.Node
class MinimalNode(Node):

    # Constructor
    def __init__(self):
        # Call the constructor of the parent class
        super().__init__('minimal_node')
        # Print message
        self.get_logger().info('Hi Azwan, this is your first ROS2 node!')

def main(args=None):
    # Initialize ROS client library
    rclpy.init(args=args)
    # Create an instance of the class
    minimal_node = MinimalNode()
    # Destroy the node explicitly
    minimal_node.destroy_node()

if __name__ == '__main__':
    main()