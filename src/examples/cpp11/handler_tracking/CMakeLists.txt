cmake_minimum_required(VERSION 3.30)

project(${prefix}handler_tracking)

set(prefix ${prefix}ht_)
set(target async_tcp_echo_server)
asio_add_example(${target})

