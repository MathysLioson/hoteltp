#include "RoleAPP.h"

// Implementation of the printRole function
void printRole(RoleAPP role) {
    switch (role) {
        case RoleAPP::CLIENT:
            std::cout << "Role: Client" << std::endl;
            break;
        case RoleAPP::MANAGER:
            std::cout << "Role: Manager" << std::endl;
            break;
        case RoleAPP::AGENT_ENTRETIEN:
            std::cout << "Role: Agent d'entretien" << std::endl;
            break;
    }
}
