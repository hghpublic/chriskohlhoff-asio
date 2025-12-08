target_sources(${target} PRIVATE
    asio.cpp
    # FIXME
    # asio_ssl.cpp
)

if(ASIO_BUILD_EXAMPLES)
    add_subdirectory(examples)
endif()

if(ASIO_BUILD_TESTS)
    add_subdirectory(tests)
endif()
