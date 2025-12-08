cmake_minimum_required(VERSION 3.30)

project(${prefix}buffers)

set(target reference_counted)
asio_add_example(${target})
