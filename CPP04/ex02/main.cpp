#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    // Animal animal;
    Animal *array[4];

    for (int i = 0; i < 2; ++i)
        array[i] = new Dog();
    for (int i = 2; i < 4; ++i)
        array[i] = new Cat();

    for (int i = 0; i < 4; ++i)
        array[i]->useBrain(i + 1);

    for (int i = 0; i < 4; ++i)
        delete array[i];

    Dog basic;
    {
        Dog tmp = basic;
    }
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    j->makeSound();
    i->makeSound();
    delete j;//should not create a leak
    delete i;
    // while (1);
    return 0;
}