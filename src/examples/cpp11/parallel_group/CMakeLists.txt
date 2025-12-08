cmake_minimum_required(VERSION 3.30)

project(${prefix}parallel_group)

set(targets
    ranged_wait_for_all
    wait_for_all
    wait_for_one
    wait_for_one_error
    wait_for_one_success
)

foreach(target ${targets})
asio_add_example(${target})
endforeach()
