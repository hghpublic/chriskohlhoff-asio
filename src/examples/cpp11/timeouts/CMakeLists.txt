cmake_minimum_required(VERSION 3.30)

project(${prefix}timeouts)

set(targets
    async_tcp_client
    blocking_tcp_client
    blocking_token_tcp_client
    blocking_udp_client
    server
)

set(prefix ${prefix}to_)
foreach(target ${targets})
asio_add_example(${target})
endforeach()
