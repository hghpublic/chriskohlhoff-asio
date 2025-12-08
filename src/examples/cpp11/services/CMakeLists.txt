cmake_minimum_required(VERSION 3.30)

project(${prefix}services)

set(prefix ${prefix}svc_)
set(target daytime_client)
asio_add_example(${target})
