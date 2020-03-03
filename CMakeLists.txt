cmake_minimum_required(VERSION 3.15)
project(agendaCpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(
        agendaCpp tests/test.cpp
        include/agendacpp/client.cpp
        include/agendacpp/phone.cpp
        include/agendacpp/errors.cpp
        src/menu.cpp
        src/agenda.cpp
)