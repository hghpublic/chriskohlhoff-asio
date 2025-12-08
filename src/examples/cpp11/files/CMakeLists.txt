cmake_minimum_required(VERSION 3.30)

project(${prefix}files)

set(targets
    async_file_copy
    blocking_file_copy
)

foreach(target ${targets})
asio_add_example(${target})
endforeach()
