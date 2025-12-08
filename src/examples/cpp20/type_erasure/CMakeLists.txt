cmake_minimum_required(VERSION 3.30)

project(${prefix}type_erasure)

set(target type_erasure)
set(output_name ${target})
set(logical_name ${prefix}${target})
add_executable(${logical_name})
target_sources(${logical_name} PRIVATE
    main.cpp
    sleep.cpp
    stdin_line_reader.cpp
)
target_compile_features(${logical_name} PRIVATE cxx_std_26)
target_link_libraries(${logical_name} PRIVATE asio::asio)
set_target_properties(${logical_name} PROPERTIES
    OUTPUT_NAME ${output_name}
)
