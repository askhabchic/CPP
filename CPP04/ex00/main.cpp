#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << "\n" << j->getType() << " " << std::endl;
    std::cout << i->getType() << " \n" << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete i;
    delete j;

    const WrongAnimal* ani = new WrongAnimal();
    const WrongAnimal* cat = new WrongCat();
    std::cout << "\n" << ani->getType() << " \n" << cat->getType() << "\n\n";
    ani->makeSound();
    cat->makeSound();
    delete ani;
    delete cat;
}