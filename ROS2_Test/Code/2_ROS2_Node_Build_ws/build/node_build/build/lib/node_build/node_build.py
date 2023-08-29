import rclpy
from rclpy.node import Node

def main(args = None):
    rclpy.init(args=args)
    node = Node("node_build")
    node.get_logger().info("Hello World")
    rclpy.spin(node)
    rclpy.shutdown()