cmake_minimum_required(VERSION 3.30)

project(${prefix}local)

set(targets
    connect_pair
    fd_passing_stream_client
    fd_passing_stream_server
    iostream_client
    stream_client
    stream_server
)

foreach(target ${targets})
asio_add_example(${target})
endforeach()
