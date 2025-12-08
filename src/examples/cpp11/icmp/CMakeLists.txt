cmake_minimum_required(VERSION 3.30)

project(${prefix}icmp)

set(target ping)
asio_add_example(${target})
