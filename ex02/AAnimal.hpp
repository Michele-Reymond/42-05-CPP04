#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>

class AAnimal {
    public:
        AAnimal();
        AAnimal(const AAnimal& instance);
        virtual ~AAnimal();

        AAnimal &operator=(const AAnimal &instance);

        virtual void            makeSound() const = 0;
        virtual std::string     getType() const = 0;

    protected:
        std::string     type;
};

#endif