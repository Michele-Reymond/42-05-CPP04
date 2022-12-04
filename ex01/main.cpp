#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

#define COLOR_RESET     "\x1b[0m"
#define COLOR           "\x1b[2m"

int main() {

    // Test given in de subject
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // delete j;//should not create a leak
    // delete i;

    // Test with a tab
    Animal *animals[10];
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