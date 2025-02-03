cmake_minimum_required(VERSION 3.16)

project(
    ORDER_BOOK
    VERSION 0.0.1
    LANGUAGES CXX
)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)

find_package(Qt5 REQUIRED COMPONENTS Quick Core Gui Qml)

add_executable(
    ${PROJECT_NAME}_${PROJECT_VERSION} 
    main.cpp
)

target_link_libraries(
    ${PROJECT_NAME}_${PROJECT_VERSION} 
    Qt5::Core Qt5::Quick Qt5::Gui Qt5::Qml
)

target_include_directories(
    ${PROJECT_NAME}_${PROJECT_VERSION} 
    PRIVATE 
    ${INCLUDE_DIR}
    ${INCLUDE_DIR}/database
    ${INCLUDE_DIR}/middleware   
    ${INCLUDE_DIR}/ordertypes
    ${INCLUDE_DIR}/ordertypes/limit
    ${INCLUDE_DIR}/ordertypes/market
    ${INCLUDE_DIR}/ordertypes/stop
)

