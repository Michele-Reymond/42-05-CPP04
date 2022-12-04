#include <iostream>
#include "AAnimal.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

#define COLOR_RESET     "\x1b[0m"
#define COLOR           "\x1b[2m"

int main() {

    // AAnimal pasOk;
    // AAnimal *ok;
    // ok = new AAnimal; // pas ok
    // ok = new Cat; // ok

    // Same main as in ex01
    AAnimal *animals[10];
    std::cout << COLOR "------ CAT CREATION -------" COLOR_RESET << std::endl;
    std::cout << std::endl;
    for (int i = 0; i < 5; i++) {
        animals[i] = new Cat;
    }

    std::cout << COLOR "------ DOG CREATION -------" COLOR_RESET << std::endl;
    std::cout << std::endl;
    for (int i = 5; i < 10; i++) {
        animals[i] = new Dog;
    }
    std::cout << std::endl << std::endl;
    std::cout << COLOR "------ ANIMAL DESTRUCTION -------" COLOR_RESET << std::endl;
    for (int i = 0; i < 10; i++) {
        delete animals[i];
    }
    return 0;
}