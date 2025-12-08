cmake_minimum_required(VERSION 3.30)

project(${prefix}daytime1)

set(prefix ${prefix}d1_)
set(target client)
asio_add_example(${target})
