include(cmake/asio_add_example.cmake)

if(ASIO_BUILD_CPP11_EXAMPLES)
set(prefix "ex11_")
add_subdirectory(cpp11)
endif()

if(ASIO_BUILD_CPP14_EXAMPLES)
set(prefix "ex14_")
add_subdirectory(cpp14)
endif()

if(ASIO_BUILD_CPP17_EXAMPLES)
set(prefix "ex17_")
add_subdirectory(cpp17)
endif()

if(ASIO_BUILD_CPP20_EXAMPLES)
set(prefix "ex20_")
add_subdirectory(cpp20)
endif()
