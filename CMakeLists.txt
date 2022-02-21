cmake_minimum_required (VERSION 2.6)

project(NaiveSQL)

option(ENABLE_TEST "Enable test program build" ON)

# add_subdirectory(src/parser)

set(CMAKE_BUILD_TYPE Release)
set(CMAKE_BINARY_DIR build)
set(EXECUTABLE_OUTPUT_PATH build)

set(NAIVE_SQL_SRC_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/src)
set(NAIVE_SQL_TEST_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/test)
set(NAIVE_SQL_THIRD_PARTY_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/third_party)
include_directories(${NAIVE_SQL_SRC_INCLUDE_DIR} ${NAIVE_SQL_TEST_INCLUDE_DIR} ${NAIVE_SQL_THIRD_PARTY_INCLUDE_DIR})

# aux_source_directory(src SOURCE)
set(SOURCE
	${SOURCE}
	${PROJECT_SOURCE_DIR}/src/fs/page_fs/buffer_manager.cpp
	${PROJECT_SOURCE_DIR}/src/page/variant_page.cpp
	${PROJECT_SOURCE_DIR}/src/ds/btree.cpp
)

set(HEADERS
	${HEADERS}
)

add_library(${CMAKE_PROJECT_NAME}_lib ${SOURCE} ${HEADERS})
add_executable(${CMAKE_PROJECT_NAME} src/main.cpp)
target_link_libraries(${CMAKE_PROJECT_NAME} ${CMAKE_PROJECT_NAME}_lib)

if (ENABLE_TEST)
	add_subdirectory(third_party/googletest)
	include_directories(${gtest_SOURCE_DIR}/include)

    enable_testing()
    if (APPLE)
        add_definitions(-DGTEST_USE_OWN_TR1_TUPLE)
        add_definitions(-D__GLIBCXX__)
    endif (APPLE)
    add_subdirectory(test)
endif (ENABLE_TEST)