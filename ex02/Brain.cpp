#include "Brain.hpp"

// --------- Constructor and destructor ------------

Brain::Brain() {
    std::cout << "A new Brain constructed" << std::endl;
}

Brain::Brain(const Brain &instance) {
    *this = instance;
}

Brain::~Brain() {
    std::cout << "A Brain destructed" << std::endl;
}


// --------- Operator overload ------------

Brain &Brain::operator=(const Brain &instance) {
    for (int i = 0; i < 100; ++i)
        this->_ideas[i] = instance._ideas[i];
    return *this;
}