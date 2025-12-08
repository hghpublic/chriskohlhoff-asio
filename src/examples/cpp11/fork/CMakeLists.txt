cmake_minimum_required(VERSION 3.30)

project(${prefix}fork)

set(targets
    daemon
    process_per_connection
)

foreach(target ${targets})
asio_add_example(${target})
endforeach()
