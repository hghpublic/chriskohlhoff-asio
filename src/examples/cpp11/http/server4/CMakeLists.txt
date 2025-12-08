cmake_minimum_required(VERSION 3.30)

set(prefix ${prefix}http_)
project(${prefix}server4)

set(target server4)
set(output_name ${target})
set(logical_name ${prefix}${target})
add_executable(${logical_name})
target_sources(${logical_name} PRIVATE
    main.cpp
    
    file_handler.cpp
    mime_types.cpp
    reply.cpp
    request_handler.cpp
    request_parser.cpp
    server.cpp
)
target_compile_features(${logical_name} PRIVATE cxx_std_26)
target_link_libraries(${logical_name} PRIVATE asio::asio)
set_target_properties(${logical_name} PROPERTIES
    OUTPUT_NAME ${output_name}
)
