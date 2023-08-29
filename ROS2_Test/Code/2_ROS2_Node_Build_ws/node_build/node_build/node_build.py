import rclpy
from rclpy.node import Node

def main(args = None):
    # 初始化客户端
    rclpy.init(args=args)
    # 节点创建
    node = Node("node_build")
    # 日志输出（节点）
    node.get_logger().info("Hello World")
    # 节点循环运行
    rclpy.spin(node)
    # 关闭客户端
    rclpy.shutdown()