#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
    public:
        Dog();
        Dog(const Dog& instance);
        virtual ~Dog();

        Dog &operator=(const Dog &instance);

        virtual void            makeSound() const;
        virtual std::string     getType() const;

        private:
            Brain           *_brain;
};

#endif