cmake_minimum_required(VERSION 3.15)
project(openimageio_shared_issue CXX)



add_executable(openimageio_shared_issue src/openimageio_shared_issue.cpp src/main.cpp)



install(TARGETS openimageio_shared_issue DESTINATION "."
        RUNTIME DESTINATION bin
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib
        )
