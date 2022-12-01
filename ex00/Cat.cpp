#include "Cat.hpp"

// --------- Constructor and destructor ------------

Cat::Cat() {
    this->type = "cat";
    std::cout << "A new cat is born" << std::endl;
}

Cat::Cat(const Cat &instance) {
    *this = instance;
}

Cat::~Cat() {
    std::cout << "A cat is dead" << std::endl;
}

// --------- Member functions ------------

void Cat::makeSound() const {
    std::cout << "maou maou!" << std::endl;
}

// --------- Operator overload ------------

Cat &Cat::operator=(const Cat &instance) {
    this->type = instance.type;
    return *this;
}