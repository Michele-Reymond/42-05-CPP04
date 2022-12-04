#include "Dog.hpp"

// --------- Constructor and destructor ------------

Dog::Dog() {
    this->type = "dog";
    this->_brain = new Brain();
    std::cout << "A new dog is born" << std::endl;
}

Dog::Dog(const Dog &instance) {
    *this = instance;
}

Dog::~Dog() {
     delete this->_brain;
    std::cout << "A dog is dead" << std::endl;
}

// --------- Member functions ------------

void Dog::makeSound() const {
    std::cout << "ouaouf ouaouf!" << std::endl;
}

std::string Dog::getType() const {
    return this->type;
}

// --------- Operator overload ------------

Dog &Dog::operator=(const Dog &instance) {
    this->type = instance.type;
    this->_brain = instance._brain;
    return *this;
}