cmake_minimum_required(VERSION 3.15)
project(CvStarter)

find_package(OpenCV REQUIRED)

add_executable(CvStarter src/main.cpp)
target_link_libraries(CvStarter PRIVATE
    ${OpenCV_LIBS}
)
target_compile_features(CvStarter PRIVATE cxx_std_17)