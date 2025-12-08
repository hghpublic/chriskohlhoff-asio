cmake_minimum_required(VERSION 3.30)

project(${prefix}timers)

set(target time_t_timer)
asio_add_example(${target})
