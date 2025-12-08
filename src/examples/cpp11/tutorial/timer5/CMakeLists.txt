cmake_minimum_required(VERSION 3.30)

project(${prefix}timer5)

set(prefix ${prefix}t5_)
set(target timer)
asio_add_example(${target})
