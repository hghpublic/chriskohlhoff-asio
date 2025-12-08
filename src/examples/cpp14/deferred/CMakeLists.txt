cmake_minimum_required(VERSION 3.30)

project(${prefix}deferred)

set(targets
    deferred_1
    deferred_2
    deferred_3
    deferred_4
    deferred_5
    deferred_6
    deferred_7
)

foreach(target ${targets})
asio_add_example(${target})
endforeach()
