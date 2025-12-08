cmake_minimum_required(VERSION 3.30)

project(${prefix}iostreams)

set(target http_client)
asio_add_example(${target})
