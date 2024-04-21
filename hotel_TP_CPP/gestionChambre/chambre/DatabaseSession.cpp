#include "DatabaseSession.h"
#include "ChambreEntity.h"

template<typename T>
DatabaseSession<T>::DatabaseSession(const std::string& connectionString)
        : connectionString(connectionString) {
    connect();
}

template<typename T>
DatabaseSession<T>::~DatabaseSession() {
    disconnect();
}

template<typename T>
void DatabaseSession<T>::connect() {
    // Example: connect to a database using the connectionString
}

template<typename T>
void DatabaseSession<T>::disconnect() {
    // Example: disconnect from the database
}

template<typename T>
void DatabaseSession<T>::execute(const std::string& statement, const std::vector<std::string>& params) {
    // Example: Execute a SQL statement using a database library
    // This is just a placeholder. Actual implementation depends on the database API used.
}

// Explicit template instantiation for the types used in the project
template class DatabaseSession<ChambreEntity>;
