#include "AAnimal.hpp"

// --------- Constructor and destructor ------------

AAnimal::AAnimal() : type("mammal") {
    std::cout << "A new mammal is born" << std::endl;
}

AAnimal::AAnimal(const AAnimal &instance) {
    *this = instance;
}

AAnimal::~AAnimal() {
    std::cout << "A mammal is dead" << std::endl;
}

// --------- Member functions ------------

void AAnimal::makeSound() const {
    std::cout << "mfksaofldjwsdjc!!" << std::endl;
}

std::string AAnimal::getType() const {
    return this->type;
}

// --------- Operator overload ------------

AAnimal &AAnimal::operator=(const AAnimal &instance) {
    this->type = instance.type;
    return *this;
}