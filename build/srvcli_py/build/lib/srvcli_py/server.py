import rclpy
from rclpy.node import Node
import time
from srv_pkg.srv import JointConversion

class JointConversionServer(Node):
    def __init__(self):
        super().__init__('joint_conversion_server')
        self.srv = self.create_service(JointConversion, 'joint_conversion', self.joint_conversion_callback)
        self.offset = [0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8]

    def joint_conversion_callback(self, request, response):
        print('Incoming request')
        j_values = []

        for i in range(len(request.joint_input)):
            j_values.append(request.joint_input[i].data)

        result = [x + y for x, y in zip(j_values, self.offset)]
        result = [(x*180)/3.14159 for x in result]

        for i in range(len(result)):
            response.joint_output[i].data = result[i]
        time.sleep(2)
        print('Returning response')

        return response
    
def main(args=None):
    rclpy.init(args=args)
    joint_conversion_server = JointConversionServer()
    rclpy.spin(joint_conversion_server)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
    


