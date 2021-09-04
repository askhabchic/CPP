#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
private:
    Brain *brain;
public:
    Dog();
    Dog(Dog &dog);
    Dog & operator=(Dog &dog);
    virtual ~Dog();
    virtual void makeSound() const;
    virtual void    useBrain(int number);
};


#endif