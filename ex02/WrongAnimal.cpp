#include "WrongAnimal.hpp"

// --------- Constructor and destructor ------------

WrongAnimal::WrongAnimal() : type("wrong mammal") {
    std::cout << "A new wrong mammal is born" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &instance) {
    *this = instance;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "A wrong mammal is dead" << std::endl;
}

// --------- Member functions ------------

void WrongAnimal::makeSound() const {
    std::cout << "wrong mfksaofldjwsdjc!!" << std::endl;
}

std::string WrongAnimal::getType() const {
    return this->type;
}

// --------- Operator overload ------------

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &instance) {
    this->type = instance.type;
    return *this;
}