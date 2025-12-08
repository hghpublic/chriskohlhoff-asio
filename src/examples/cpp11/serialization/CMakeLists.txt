cmake_minimum_required(VERSION 3.30)

project(${prefix}serialization)

find_package(Boost REQUIRED COMPONENTS serialization)

set(targets
    client
    server
)

set(prefix ${prefix}ser_)
foreach(target ${targets})
asio_add_example(${target})
target_link_libraries(${logical_name} PRIVATE Boost::serialization)
endforeach()
