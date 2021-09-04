#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    Animal *array[10];

    for (int i = 0; i < 5; ++i)
        array[i] = new Dog();
    for (int i = 5; i < 10; ++i)
        array[i] = new Cat();

    for (int i = 0; i < 10; ++i)
        array[i]->useBrain(i + 1);

    for (int i = 0; i < 10; ++i)
        delete array[i];

    Dog basic;
    {
        Dog tmp = basic;
    }
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;
    while (1);
    return 0;
}