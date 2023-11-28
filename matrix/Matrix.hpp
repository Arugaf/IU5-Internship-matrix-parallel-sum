#pragma once

#include <Vec.hpp>

#include <cstddef>

namespace ParallelSum {
    struct Matrix {
        Vec<int> matrix;
    };

    int GetElementByIndexes(std::size_t i, std::size_t j);
} // namespace ParallelSum
