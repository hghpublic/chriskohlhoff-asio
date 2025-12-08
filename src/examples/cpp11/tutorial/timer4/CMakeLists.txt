cmake_minimum_required(VERSION 3.30)

project(${prefix}timer4)

set(prefix ${prefix}t4_)
set(target timer)
asio_add_example(${target})
