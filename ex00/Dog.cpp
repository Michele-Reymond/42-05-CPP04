#include "Dog.hpp"

// --------- Constructor and destructor ------------

Dog::Dog() {
    this->type = "dog";
    std::cout << "A new dog is born" << std::endl;
}

Dog::Dog(const Dog &instance) {
    *this = instance;
}

Dog::~Dog() {
    std::cout << "A dog is dead" << std::endl;
}

// --------- Member functions ------------

void Dog::makeSound() const {
    std::cout << "ouaouf ouaouf!" << std::endl;
}

// --------- Operator overload ------------

Dog &Dog::operator=(const Dog &instance) {
    this->type = instance.type;
    return *this;
}