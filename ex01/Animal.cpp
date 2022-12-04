#include "Animal.hpp"

// --------- Constructor and destructor ------------

Animal::Animal() : type("mammal") {
    std::cout << "A new mammal is born" << std::endl;
}

Animal::Animal(const Animal &instance) {
    *this = instance;
}

Animal::~Animal() {
    std::cout << "A mammal is dead" << std::endl;
}

// --------- Member functions ------------

void Animal::makeSound() const {
    std::cout << "mfksaofldjwsdjc!!" << std::endl;
}

std::string Animal::getType() const {
    return this->type;
}

// --------- Operator overload ------------

Animal &Animal::operator=(const Animal &instance) {
    this->type = instance.type;
    return *this;
}