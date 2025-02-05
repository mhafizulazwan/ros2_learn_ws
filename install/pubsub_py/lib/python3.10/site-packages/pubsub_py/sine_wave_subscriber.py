# Import ROS2 client library
import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64
import threading
import matplotlib.pyplot as plt
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg
import tkinter as tk

# Define a class that inherits from rclpy.node.Node
class SineWaveSubscriber(Node):

    # Define subscriber
    def __init__(self):
        # Call the constructor of the parent class
        super().__init__('sine_wave_subscriber')
        
        # Create subscriber
        self.subscriber = self.create_subscription(Float64, 'sine_wave_signal', self.sine_subscriber, 20)

        # Parameters to receive and plot data 
        self.first_data_arrived = False
        self.sine_values = None
        self.logging_time = 15

    # Define callback function
    def sine_subscriber(self, msg):
        self.sine_values = msg.data
        self.first_data_arrived = True

    # Save data to plot
    def log_data(self):
        rate = self.create_rate(10)
        sine_data = []

        while (self.first_data_arrived == False):
            rate.sleep()
        
        self.get_logger().info('Starting to log data!')

        # Log data for 15 seconds
        t = 0.0
        while t < self.logging_time:
            sine_data.append(self.sine_values)
            t += 0.1
            rate.sleep()
        
        # Destroy the node explicitly
        self.destroy_node()

        # Plot the saved data
        root = tk.Tk()
        root.title('Sine Wave Signal')

        plt.plot(sine_data)
        plt.xlabel('Time (s)')
        plt.ylabel('Sine Wave Value')
        plt.title('Sine Wave Signal')
        
        fig = plt.gcf()
        canvas = FigureCanvasTkAgg(fig, master=root)
        canvas.draw()
        canvas.get_tk_widget().pack(side=tk.TOP, fill=tk.BOTH, expand=1)

        tk.mainloop()
        
        rclpy.shutdown()
            
def main(args=None):
    # Initialize ROS client library
    rclpy.init(args=args)

    # Create an instance of the class
    sine_wave_subscriber = SineWaveSubscriber()

    # Threading / run the function in parallel
    t = threading.Thread(target=sine_wave_subscriber.log_data,args=[])
    t.start()
    
    rclpy.spin(sine_wave_subscriber)

if __name__ == '__main__':
    main()