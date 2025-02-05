import sys
import rclpy
from rclpy.node import Node
from srv_pkg.srv import JointConversion

class JointConversionClient(Node):
    def __init__(self):
        super().__init__('joint_conversion_client')
        self.cli = self.create_client(JointConversion, 'joint_conversion')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
       
    def send_request(self, joint_value):
        req = JointConversion.Request()
        for i in range (len(joint_value)):
            req.joint_input[i].data = joint_value[i]
        self.future = self.cli.call_async(req)
        rclpy.spin_until_future_complete(self,self.future)
        
        return self.future.result()
    
def main(args=None):
    rclpy.init(args=args)
    joint_conversion_client = JointConversionClient()
    joint_values = [1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0]
    response = joint_conversion_client.send_request(joint_values)
    joint_conversion_client.get_logger().info('Result: %s' % response.joint_output)
    joint_conversion_client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
        main()