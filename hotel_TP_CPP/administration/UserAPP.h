// Protection contre les inclusions multiples
#ifndef USERAPP_H
#define USERAPP_H

#include <string>

class UserAPP {
private:
    std::string id;
    RoleAPP role;

public:
    UserAPP();
    UserAPP(const std::string& id, RoleAPP role);
    std::string getId() const;
    RoleAPP getRole() const;
    void setRole(RoleAPP newRole);
    void display() const;
};

#endif // USERAPP_H
