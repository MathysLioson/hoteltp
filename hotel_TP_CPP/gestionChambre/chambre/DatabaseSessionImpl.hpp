#include "DatabaseSession.h"

// DatabaseSessionImpl.hpp
template<typename T>
DatabaseSession<T>::DatabaseSession(const std::string& connectionString)
        : connectionString(connectionString) {
    connect();
}

template<typename T>
DatabaseSession<T>::~DatabaseSession() {
    disconnect();
}

// Define other methods similarly...
