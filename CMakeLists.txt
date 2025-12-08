cmake_minimum_required(VERSION 3.30)

project(asio
    VERSION 1.36.0
    HOMEPAGE_URL https://think-async.com/Asio/
    DESCRIPTION "Asio C++ Library"
    LANGUAGES CXX
)

if(PROJECT_IS_TOP_LEVEL)
# examples
option(ASIO_BUILD_EXAMPLES "Build the Asio example programs" ON)
option(ASIO_BUILD_CPP11_EXAMPLES "Build the Asio C++11 example programs" ON)
option(ASIO_BUILD_CPP14_EXAMPLES "Build the Asio C++14 example programs" ON)
option(ASIO_BUILD_CPP17_EXAMPLES "Build the Asio C++17 example programs" ON)
option(ASIO_BUILD_CPP20_EXAMPLES "Build the Asio C++20 example programs" ON)
# tests
option(ASIO_BUILD_TESTS "Build the Asio test programs" OFF)
endif()

set(target asio)
add_library(${target} SHARED)
add_library(asio::asio ALIAS ${target})
target_compile_features(${target} PRIVATE cxx_std_26)
target_compile_definitions(${target} PRIVATE
    ASIO_STANDALONE
    ASIO_DYN_LINK
)
target_include_directories(${target} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_subdirectory(src)
