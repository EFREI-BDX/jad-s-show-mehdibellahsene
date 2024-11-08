cmake_minimum_required(VERSION 3.29)
project(mehdi_show)

set(CMAKE_CXX_STANDARD 20)

add_executable(mehdi_show main.cpp
        show/concertshow.h
        show/show.h
        show/streetshow.h
        show/theatershow.h
        show/movieshow.h
        show/ishow.h
        show/showtype.h)