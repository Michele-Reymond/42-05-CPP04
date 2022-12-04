#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {
    public:
        Animal();
        Animal(const Animal& instance);
        virtual ~Animal();

        Animal &operator=(const Animal &instance);

        virtual void    makeSound() const;
        std::string     getType() const;

    protected:
        std::string     type;
};

#endif