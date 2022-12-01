#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

#define COLOR_RESET     "\x1b[0m"
#define COLOR           "\x1b[2m"

int main() {
    std::cout << COLOR "------ ANIMAL CREATION -------" COLOR_RESET << std::endl;
    std::cout << std::endl;
    const Animal* meta = new Animal();
    const WrongAnimal* wrong = new WrongAnimal();
    std::cout << std::endl;
    std::cout << COLOR "- Dog creation-" COLOR_RESET << std::endl;
    const Animal* j = new Dog();
    std::cout << std::endl;
    std::cout << COLOR "- Cat creation-" COLOR_RESET << std::endl;
    const Animal* i = new Cat();
    std::cout << std::endl;
    std::cout << COLOR "- Wrong Cat creation-" COLOR_RESET << std::endl;
    const WrongAnimal* k = new WrongCat();

    std::cout << std::endl << std::endl;
    std::cout << COLOR "------ Let them scream -------" COLOR_RESET << std::endl;
    std::cout << std::endl;
    std::cout << meta->getType() << " : ";
    meta->makeSound();
    std::cout << j->getType() << " : ";
     j->makeSound();
    std::cout << i->getType() << " : ";
    i->makeSound(); //will output the cat sound!
    std::cout << wrong->getType() << " : ";
    wrong->makeSound();
    std::cout << k->getType() << " : ";
    k->makeSound(); // will output Animal sound and it's wrong

    std::cout << std::endl << std::endl;
    std::cout << COLOR "------ ANIMAL DESTRUCTION -------" COLOR_RESET << std::endl;
    std::cout << std::endl;
    delete(meta);
    delete(wrong);
    std::cout << std::endl;
    std::cout << COLOR "- Dog destruction-" COLOR_RESET << std::endl;
    delete(j);
    std::cout << std::endl;
    std::cout << COLOR "- Cat destruction-" COLOR_RESET << std::endl;
    delete(i);
    std::cout << std::endl;
    std::cout << COLOR "- Wrong Cat destruction-" COLOR_RESET << std::endl;
    delete(k);
    return 0;
}