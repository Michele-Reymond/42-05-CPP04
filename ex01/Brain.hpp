#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain {
    public:
        Brain();
        Brain(const Brain& instance);
        virtual ~Brain();

        Brain &operator=(const Brain &instance);

    private:
        std::string _ideas[100];
};

#endif