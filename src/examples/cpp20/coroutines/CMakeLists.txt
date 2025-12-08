cmake_minimum_required(VERSION 3.30)

project(${prefix}coroutines)

set(targets
    chat_server
    echo_server
    echo_server_with_as_single_default
    echo_server_with_as_tuple_default
    echo_server_with_default
    echo_server_with_deferred
    echo_server_with_deferred_default
    refactored_echo_server
    timeout
)

foreach(target ${targets})
asio_add_example(${target})
endforeach()
