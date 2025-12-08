cmake_minimum_required(VERSION 3.30)

project(${prefix}timer1)

set(prefix ${prefix}t1_)
set(target timer)
asio_add_example(${target})
