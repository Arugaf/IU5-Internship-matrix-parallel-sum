set(SERVER_NAME ${PROJECT_NAME}-server)

set(SOURCE main.cpp
        HttpServer.cpp
        Socket.cpp
        thread_manager/ThreadManager.cpp
        ${PROJECT_SOURCE_DIR}/matrix/Matrix.cpp
        matrix_calculation_handler/MatrixCalculationHandler.cpp
        App.cpp)

set(HEADERS ${PROJECT_SOURCE_DIR}/utils/Vec.hpp
        HttpServer.hpp
        Socket.hpp
        thread_manager/ThreadManager.hpp
        App.hpp
        ${PROJECT_SOURCE_DIR}/matrix/Matrix.hpp
        matrix_calculation_handler/MatrixCalculationHandler.hpp)

include_directories(${PROJECT_SOURCE_DIR}/utils ${PROJECT_SOURCE_DIR}/matrix)

add_executable(${SERVER_NAME} ${SOURCE} ${HEADERS})
