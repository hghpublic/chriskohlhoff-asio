cmake_minimum_required(VERSION 3.30)

project(${prefix}futures)

set(target daytime_client)
asio_add_example(${target})
