#include <exception>

class DroitInsuffisantException : public std::exception {
private:
    const char* message = "Seul un manager peut effectuer cette action";

public:
    const char* what() const noexcept override {
        return message;
    }
};
