#pragma once

#include "Matrix.hpp"

#include <string>

namespace ParallelSum {
    struct Arguments {
        Matrix matrix;
        int threadCount;
    };

    void Exec(int argc, char** argv);
    Arguments ParseArguments(const std::string& clientRequest);

    // matrix serializer/deserializer
    // server connector
} // namespace ParallelSum
