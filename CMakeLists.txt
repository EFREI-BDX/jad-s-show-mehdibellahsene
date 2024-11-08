cmake_minimum_required(VERSION 3.29)
project(mehdi_show)

set(CMAKE_CXX_STANDARD 20)

include_directories(${CMAKE_SOURCE_DIR}/show)
include_directories(${CMAKE_SOURCE_DIR}/customer)

add_executable(mehdi_show
        main.cpp
        show/concertshow.h
        show/show.h
        show/streetshow.h
        show/theatershow.h
        show/movieshow.h
        show/ishow.h
        show/showtype.h
        customer/ispectator.h
        customer/Spectator.h
        show/show.cpp
        show/movietype.h
        show/movietype.cpp
)