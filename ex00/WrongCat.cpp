#include "WrongCat.hpp"

// --------- Constructor and destructor ------------

WrongCat::WrongCat() {
    this->type = "wrong cat";
    std::cout << "A new wrong cat is born" << std::endl;
}

WrongCat::WrongCat(const WrongCat &instance) {
    *this = instance;
}

WrongCat::~WrongCat() {
    std::cout << "A wrong cat is dead" << std::endl;
}

// --------- Member functions ------------

void WrongCat::makeSound() const {
    std::cout << "wrong maou maou!" << std::endl;
}

// --------- Operator overload ------------

WrongCat &WrongCat::operator=(const WrongCat &instance) {
    this->type = instance.type;
    return *this;
}