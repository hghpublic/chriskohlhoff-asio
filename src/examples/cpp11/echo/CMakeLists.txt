cmake_minimum_required(VERSION 3.30)

project(${prefix}echo)

set(targets
    async_tcp_echo_server
    async_udp_echo_server
    blocking_tcp_echo_client
    blocking_tcp_echo_server
    blocking_udp_echo_client
    blocking_udp_echo_server
)

foreach(target ${targets})
asio_add_example(${target})
endforeach()
