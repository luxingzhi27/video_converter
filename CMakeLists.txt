cmake_minimum_required(VERSION 3.25)
project(video_converter)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(video_converter main.cpp video_converter_ui.cpp success_ui.cpp)
target_link_libraries(video_converter
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        )

