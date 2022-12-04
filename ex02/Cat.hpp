#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
    public:
        Cat();
        Cat(const Cat& instance);
        virtual ~Cat();

        Cat &operator=(const Cat &instance);

        virtual void            makeSound() const;
        virtual std::string     getType() const;

        private:
            Brain           *_brain;
};

#endif