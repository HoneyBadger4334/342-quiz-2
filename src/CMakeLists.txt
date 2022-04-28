add_executable(${PROJECT_NAME} main.cpp)

FILE(GLOB ProblemSource cat.cpp dog.cpp animal.cpp)
add_library(homework_functions STATIC ${ProblemSource})

target_link_libraries(${PROJECT_NAME} homework_functions)

add_test(
        NAME
        main
        COMMAND
        ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/${PROJECT_NAME}
)