cmake_minimum_required(VERSION 2.8)
project(app_project)
message("NguyenNH: vị trí file CMakeLists.txt: " ${CMAKE_CURRENT_SOURCE_DIR} )


add_executable(main main.c)

target_link_libraries(main "${CMAKE_CURRENT_SOURCE_DIR}/../generate_shared_library/bin/Debug/phepcong.lib")