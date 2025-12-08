cmake_minimum_required(VERSION 3.30)

project(${prefix}chat)

set(targets
    chat_client
    chat_server
    posix_chat_client
)

foreach(target ${targets})
asio_add_example(${target})
endforeach()
