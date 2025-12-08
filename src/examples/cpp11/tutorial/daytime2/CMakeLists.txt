cmake_minimum_required(VERSION 3.30)

project(${prefix}daytime2)

set(prefix ${prefix}d2_)
set(target server)
asio_add_example(${target})
