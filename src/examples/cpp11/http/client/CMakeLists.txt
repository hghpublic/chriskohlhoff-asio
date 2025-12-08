cmake_minimum_required(VERSION 3.30)

set(prefix ${prefix}http_)
project(${prefix}client)

set(targets
    async_client
    sync_client
)

foreach(target ${targets})
asio_add_example(${target})
endforeach()
