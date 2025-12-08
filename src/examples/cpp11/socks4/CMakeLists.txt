cmake_minimum_required(VERSION 3.30)

project(${prefix}socks4)

set(target sync_client)
asio_add_example(${target})
