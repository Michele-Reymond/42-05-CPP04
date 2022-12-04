#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    public:
        WrongCat();
        WrongCat(const WrongCat& instance);
        virtual ~WrongCat();

        WrongCat &operator=(const WrongCat &instance);

        void makeSound() const;
};

#endif