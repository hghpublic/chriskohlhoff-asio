cmake_minimum_required(VERSION 3.30)

project(${prefix}iostreams)

set(targets
    daytime_client
    daytime_server
    http_client
)

set(prefix ${prefix}io_)
foreach(target ${targets})
asio_add_example(${target})
endforeach()
