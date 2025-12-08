cmake_minimum_required(VERSION 3.30)

project(${prefix}multicast)

set(targets
    receiver
    sender
)

foreach(target ${targets})
asio_add_example(${target})
endforeach()
