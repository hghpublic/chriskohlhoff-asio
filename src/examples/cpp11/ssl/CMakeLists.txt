cmake_minimum_required(VERSION 3.30)

project(${prefix}ssl)

set(targets
    client
    server
)

set(prefix ${prefix}ssl_)
foreach(target ${targets})
# FIXME
# asio_add_example(${target})
endforeach()
