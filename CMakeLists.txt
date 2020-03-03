cmake_minimum_required(VERSION 3.15)
project(agendaCpp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "-std=c++1z -pthread")

include_directories(/usr/local/include)
link_directories(/usr/local/lib)

add_executable(
        agendaCpp tests/gooTest.cpp
        include/agendacpp/client.cpp
        include/agendacpp/phone.cpp
        include/agendacpp/errors.cpp
        src/menu.cpp
        src/agenda.cpp
        src/filemanip.cpp
)

target_link_libraries(${PROJECT_NAME} libgtest.a libgtest_main.a)
