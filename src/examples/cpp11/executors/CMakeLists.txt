cmake_minimum_required(VERSION 3.30)

project(${prefix}executors)

set(targets
    actor
    bank_account_1
    bank_account_2
    fork_join
    pipeline
    priority_scheduler
)

foreach(target ${targets})
asio_add_example(${target})
endforeach()
