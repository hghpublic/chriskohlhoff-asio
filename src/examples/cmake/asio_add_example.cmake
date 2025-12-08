macro(asio_add_example target)
set(output_name ${target})
set(logical_name ${prefix}${target})
add_executable(${logical_name} ${target}.cpp)
target_compile_features(${logical_name} PRIVATE cxx_std_26)
target_link_libraries(${logical_name} PRIVATE asio::asio)
set_target_properties(${logical_name} PROPERTIES
    OUTPUT_NAME ${output_name}
)
endmacro()
