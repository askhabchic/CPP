#include "Dog.hpp"

Dog::Dog()  {
    type = "Dog";
    std::cout << "  Dog class default constructor called for <" << type << ">.\n";
    brain = new Brain();    }

Dog::Dog(Dog &dog){
    std::cout << "  Dog class copy constructor called for <" << type << ">.\n";
    this->operator=(dog);    }

Dog &Dog::operator=(Dog &dog){
    this->type = dog.type;
    this->brain = new Brain(*dog.brain);
    return *this;
}

Dog::~Dog() {
    delete brain;
    std::cout << "  Dog class destructor called for <" << type << ">.\n";
}

void Dog::makeSound() const{
    std::cout << "Dog class object with type <" << type << "> make \"WOOF-WOOF-WOOF\".\n";
}

void Dog::useBrain(int number){
    Brain::animalHasBrain(this->getType(), number);
}