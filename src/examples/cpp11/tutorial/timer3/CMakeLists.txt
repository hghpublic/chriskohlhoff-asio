cmake_minimum_required(VERSION 3.30)

project(${prefix}timer3)

set(prefix ${prefix}t3_)
set(target timer)
asio_add_example(${target})
