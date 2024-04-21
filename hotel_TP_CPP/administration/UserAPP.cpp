#include "UserAPP.h"
#include <iostream>

UserAPP::UserAPP() : id(""), role(RoleAPP::CLIENT) {}

UserAPP::UserAPP(const std::string& id, RoleAPP role) : id(id), role(role) {}

std::string UserAPP::getId() const {
    return id;
}

RoleAPP UserAPP::getRole() const {
    return role;
}

void UserAPP::setRole(RoleAPP newRole) {
    role = newRole;
}

void UserAPP::display() const {
    std::cout << "User ID: " << id << ", Role: " << static_cast<int>(role) << std::endl;
}
