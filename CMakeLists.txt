cmake_minimum_required(VERSION 3.28)
project(for_tests)

include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG        release-1.12.0
)
FetchContent_MakeAvailable(googletest)

enable_testing()
include(GoogleTest)

add_subdirectory(test_class)

#set(CMAKE_INCLUDE_CURRENT_DIR ON)

#add_executable(for_tests
#        main.cpp
#        my_class.cpp
#)

