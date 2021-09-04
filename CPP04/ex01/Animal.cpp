#include "Animal.hpp"

Animal::Animal()    {
    type = "Animal";
    std::cout << "Animal class default constructor called for <" << type << ">.\n"; }

Animal::Animal(Animal &anim)    {
    *this = anim;   }

Animal & Animal::operator=(Animal &anim)    {
    this->type = anim.type;
    return *this;   }

Animal::~Animal()   {
    std::cout << "    Animal class destructor called for <" << type << ">.\n";  }

void    Animal::makeSound() const    {
    std::cout << "Animal class object with type <" << type << "> make \" §±!@#$%^&* \"\n\n";    }

std::string Animal::getType(void) const  {
    return this->type;  }

void Animal::useBrain(int number){
    Brain::animalHasBrain(this->getType(), number);
}
