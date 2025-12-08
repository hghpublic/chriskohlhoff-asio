cmake_minimum_required(VERSION 3.30)

project(${prefix}coroutines_ts)

set(targets
    chat_server
    echo_server
    echo_server_with_as_single_default
    echo_server_with_as_tuple_default
    echo_server_with_default
    range_based_for
    refactored_echo_server
)

foreach(target ${targets})
asio_add_example(${target})
endforeach()
