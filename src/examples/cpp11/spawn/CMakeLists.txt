cmake_minimum_required(VERSION 3.30)

project(${prefix}spawn)

set(targets
    echo_server
    parallel_grep
)

foreach(target ${targets})
# FIXME
# asio_add_example(${target})
endforeach()
