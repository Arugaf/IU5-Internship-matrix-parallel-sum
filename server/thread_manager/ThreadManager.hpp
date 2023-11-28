#pragma once

#include <Vec.hpp>

#include <functional>
#include <thread>

namespace ParallelSum {
    struct ThreadManager {
        Vec<std::thread> threads;
        std::uint8_t threadCount;

        std::function<void()> callback;
    };

    void InitThreads(ThreadManager& threadMnager, const std::function<void()>& callback);
    void DestroyThreads(ThreadManager& threadManager);
} // namespace ParallelSum
