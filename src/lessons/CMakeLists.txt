project(Lessons)
set(LESSONS ${PROJECT_NAME} CACHE INTERNAL "LESSONS")

set(LESSONS_PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/private/main.cpp
)
set(LESSONS_PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/public/main.h
)

set(LESSONS_COLLECTIVE
    ${LESSONS_PRIVATE}
    ${LESSONS_PUBLIC}
)

add_executable(${PROJECT_NAME}
    ${LESSONS_COLLECTIVE}
)

add_source_group(${LESSONS_COLLECTIVE})

target_link_libraries(${PROJECT_NAME}
    ${LESSONS_API}
#    ${UTILITIES}
)