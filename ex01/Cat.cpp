#include "Cat.hpp"

// --------- Constructor and destructor ------------

Cat::Cat() {
    this->type = "cat";
    this->_brain = new Brain();
    std::cout << "A new cat is born" << std::endl;
}

Cat::Cat(const Cat &instance) {
    *this = instance;
}

Cat::~Cat() {
    delete this->_brain;
    std::cout << "A cat is dead" << std::endl;
}

// --------- Member functions ------------

void Cat::makeSound() const {
    std::cout << "maou maou!" << std::endl;
}

// --------- Operator overload ------------

Cat &Cat::operator=(const Cat &instance) {
    this->_brain = instance._brain;
    this->type = instance.type;
    return *this;
}