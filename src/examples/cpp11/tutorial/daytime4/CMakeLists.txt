cmake_minimum_required(VERSION 3.30)

project(${prefix}daytime4)

set(prefix ${prefix}d4_)
set(target client)
asio_add_example(${target})
