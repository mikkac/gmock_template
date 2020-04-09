set(test_src
    src/lib_test.cpp
)

add_executable(${lib_test} ${test_src})
target_link_libraries(${lib_test} ${lib} gtest gtest_main ${CMAKE_THREAD_LIBS_INIT})
target_include_directories(${lib_test} PUBLIC
        inc
)
