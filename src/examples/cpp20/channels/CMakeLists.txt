cmake_minimum_required(VERSION 3.30)

project(${prefix}channels)

set(targets
    mutual_exclusion_1
    mutual_exclusion_2
    throttling_proxy
)

foreach(target ${targets})
asio_add_example(${target})
endforeach()
