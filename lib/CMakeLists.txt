find_package(Threads)

set (SRC
    src/lib.cpp)

add_library(${lib} ${SRC})
target_link_libraries(${lib} ${CMAKE_THREAD_LIBS_INIT})
target_include_directories(${lib} PUBLIC
        inc
)
