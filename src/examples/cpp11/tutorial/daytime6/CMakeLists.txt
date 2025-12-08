cmake_minimum_required(VERSION 3.30)

project(${prefix}daytime6)

set(prefix ${prefix}d6_)
set(target server)
asio_add_example(${target})
