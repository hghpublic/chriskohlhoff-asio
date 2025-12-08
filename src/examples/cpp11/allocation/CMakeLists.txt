cmake_minimum_required(VERSION 3.30)

project(${prefix}allocation)

set(target server)
asio_add_example(${target})
