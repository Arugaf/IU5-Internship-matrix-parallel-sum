#pragma once

#include "Socket.hpp"

#include <Vec.hpp>

#include <functional>
#include <string>

namespace ParallelSum {
    struct Server {
        std::string host;
        std::uint_16t port;
        Socket socket;
        bool isRrunning = false;

        Vec<std::function<void()>> observersCallback;
    };

    void Start(Server& server, int port = 80);
    void Stop(Server& server);

    void Listen(const Server& server);

    void HandleRequest(const Server& server, const std::string& request);
    void NotifyGotRequest(const Server& server);
    void CreateResponse(const Server& server, const std::string& response);

    void SubscribeCallback(const std::function<void()>& functor);
} // namespace ParallelSum
