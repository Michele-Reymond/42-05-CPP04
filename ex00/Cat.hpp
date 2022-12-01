#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal {
    public:
        Cat();
        Cat(const Cat& instance);
        virtual ~Cat();

        Cat &operator=(const Cat &instance);

        virtual void    makeSound() const;
};

#endif