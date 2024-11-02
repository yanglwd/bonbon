# bonbon

一、目标：
    实现一个本地转发代理

二、模块：
    1、配置文件：本地无配置，需要远程拉取（如Redis，Etcd等）
    2、UnixSocket：收发本地进程的网络消息
    3、Dispatcher：转发到远端
    4、ServiceDiscovery：服务发现
