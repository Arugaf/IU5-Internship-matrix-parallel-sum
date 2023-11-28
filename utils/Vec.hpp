#pragma once

#include <cstddef>

namespace ParallelSum {
    template<typename T>
    struct Vec {
        size_t size = 0;
        size_t capacity = 8;
        size_t growthFactor = 2;
        T* vector = nullptr;
    };

    /// [de]initializers
    template<typename T>
    [[nodiscard]] Vec<T> InitDefaultVector();
    template<typename T>
    void DestroyVector(Vec<T>& vector);

    /// element access
    template<typename T>
    [[nodiscard]] int& GetElement(const Vec<T>& vector, size_t index);

    /// modifiers
    template<typename T>
    void PushBack(Vec<T>& vector, int elemnt);
    template<typename T>
    void PopBack(Vec<T>& vector);
} // namespace ParallelSum
