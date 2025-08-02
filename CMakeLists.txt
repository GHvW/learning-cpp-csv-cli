
cmake_minimum_required(VERSION 3.31)
project(my_csv_project)

set(CMAKE_CXX_STANDARD 20)

add_executable(my_csv_project
        main.cpp
        read_csv.cpp
        print_csv.cpp
)
