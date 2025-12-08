cmake_minimum_required(VERSION 3.30)

project(${prefix}porthopper)

set(targets
    client
    server
)

set(prefix ${prefix}ph_)
foreach(target ${targets})
asio_add_example(${target})
endforeach()
