cmake_minimum_required(VERSION 3.31)

project(
    ORDER_BOOK
    VERSION 0.0.1
    LANGUAGES CXX C
)

# set(CMAKE_CXX_STANDARD 23)
# set(CMAKE_CXX_STANDARD_REQUIRED ON)

# find_package(Qt6 REQUIRED COMPONENTS Core Widgets Quick)

add_executable(
    ${PROJECT_NAME}_${PROJECT_VERSION} 
    main.cpp
)

# target_link_libraries(${PROJECT_NAME} PRIVATE Qt6::Core Qt6::Widgets Qt6::Quick)

if(WIN32)
    set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
elseif(APPLE)
    set(CMAKE_MACOSX_RPATH ON)
else()
    set(CMAKE_POSITION_INDEPENDENT_CODE ON)
endif()
