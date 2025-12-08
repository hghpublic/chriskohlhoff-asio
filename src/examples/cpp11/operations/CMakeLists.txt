cmake_minimum_required(VERSION 3.30)

project(${prefix}operations)

set(targets
    composed_1
    composed_2
    composed_3
    composed_4
    composed_5
    composed_6
    composed_7
    composed_8
)

foreach(target ${targets})
asio_add_example(${target})
endforeach()
