cmake_minimum_required(VERSION 3.12)
project(laboratorium_5 C)

set(CMAKE_C_STANDARD 99)

add_executable(pthreads_suma pthreads_suma.c pthreads_suma_origin.c)
add_executable(zad1 zad1.c)
add_executable(pthreads_suma_origin pthreads_suma_origin.c)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -pthread -lm")

set (sources include/pomiar_czasu.h include/pomiar_czasu.c)

add_library( async_waiter ${sources} )

TARGET_LINK_LIBRARIES(pthreads_suma m async_waiter)
TARGET_LINK_LIBRARIES(zad1 m async_waiter)
TARGET_LINK_LIBRARIES(pthreads_suma_origin m async_waiter)


