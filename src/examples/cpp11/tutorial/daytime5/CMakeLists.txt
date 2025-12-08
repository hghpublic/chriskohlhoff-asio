cmake_minimum_required(VERSION 3.30)

project(${prefix}daytime5)

set(prefix ${prefix}d5_)
set(target server)
asio_add_example(${target})
