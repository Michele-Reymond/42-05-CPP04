#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal {
    public:
        Dog();
        Dog(const Dog& instance);
        virtual ~Dog();

        Dog &operator=(const Dog &instance);

        virtual void    makeSound() const;
};

#endif