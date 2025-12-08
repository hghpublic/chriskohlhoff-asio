cmake_minimum_required(VERSION 3.30)

project(${prefix}daytime7)

set(prefix ${prefix}d7_)
set(target server)
asio_add_example(${target})
