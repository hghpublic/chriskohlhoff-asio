cmake_minimum_required(VERSION 3.30)

project(${prefix}daytime3)

set(prefix ${prefix}d3_)
set(target server)
asio_add_example(${target})
