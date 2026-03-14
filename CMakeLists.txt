cmake_minimum_required(VERSION 3.16)

project(MiniThinkcellChartEngine LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(mini_thinkcell_chart_engine
    src/main.cpp
    src/chart_model.cpp
)

target_include_directories(mini_thinkcell_chart_engine PRIVATE include)