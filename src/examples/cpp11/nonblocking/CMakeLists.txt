cmake_minimum_required(VERSION 3.30)

project(${prefix}nonblocking)

set(target third_party_lib)
asio_add_example(${target})
