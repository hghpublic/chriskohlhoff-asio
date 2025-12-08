cmake_minimum_required(VERSION 3.30)

project(${prefix}timer2)

set(prefix ${prefix}t2_)
set(target timer)
asio_add_example(${target})
