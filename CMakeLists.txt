cmake_minimum_required(VERSION 3.0)
project(torch-scratchpad VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS 1)

# If you installed torch's cmake file to 
# /usr/share/cmake, it should find it and
# therefore dramatically make your life like
# 25000% better

find_package(Torch REQUIRED)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${TORCH_CXX_FLAGS}")

add_executable(scratchpad scratchpad.cpp)
target_link_libraries(scratchpad "${TORCH_LIBRARIES}")
