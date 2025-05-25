cmake_minimum_required(VERSION 3.30)
project(thunder_fighter C)

set(CMAKE_C_STANDARD 11)

set(INC_DIR ./include)

set(LINK_DIR ./lib)

include_directories(${INC_DIR})
link_directories(${LINK_DIR})

add_executable(thunder_fighter
        include/movement.h
        movement.c
        main.c
        include/bullet.h
        bullet.c
        enemy.h
        enemy.c
)

target_link_libraries(thunder_fighter libraylib.a)