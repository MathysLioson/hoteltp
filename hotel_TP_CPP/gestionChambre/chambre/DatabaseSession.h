#ifndef DATABASE_SESSION_H
#define DATABASE_SESSION_H

#include <string>
#include <vector>
#include <memory> // Ensure this is included for shared_ptr

template<typename T>
class DatabaseSession {
public:
    explicit DatabaseSession(const std::string& connectionString);
    ~DatabaseSession();

    std::shared_ptr<T> query(const std::string& query, const std::string& id);
    std::vector<T> queryAll(const std::string& query);
    void execute(const std::string& statement, const std::vector<std::string>& params);

private:
    void connect();
    void disconnect();
    std::string connectionString;
};

// Including method definitions inline for template classes is a common approach
#include "DatabaseSessionImpl.hpp"

#endif // DATABASE_SESSION_H
