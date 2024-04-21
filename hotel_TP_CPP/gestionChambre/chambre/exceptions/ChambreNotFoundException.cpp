#include <exception>
#include <cstring>

class ChambreNotFoundException : public std::exception {
private:
    const char* message = "Chambre non trouvée";

public:
    const char* what() const noexcept override {
        return message;
    }
};
