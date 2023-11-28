set(CLIENT_NAME ${PROJECT_NAME}-client)

set(SOURCE main.cpp
        App.cpp)

set(HEADERS App.hpp)

include_directories(${PROJECT_SOURCE_DIR}/utils ${PROJECT_SOURCE_DIR}/matrix)

add_executable(${CLIENT_NAME} ${SOURCE} ${HEADERS})
