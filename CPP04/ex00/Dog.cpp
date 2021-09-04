#include "Dog.hpp"

Dog::Dog()  {
    type = "Dog";
    std::cout << "Dog class default constructor called for <" << type << ">.\n"; }

Dog::Dog(Dog &dog){
    *this = dog;    }

Dog &Dog::operator=(Dog &dog){
    this->type = dog.type;
    return *this;
}

Dog::~Dog() {
    std::cout << "Dog class destructor called for " << type << ">.\n";
}

void Dog::makeSound() const{
    std::cout << "Dog class object with type <" << type << "> make \"WOOF-WOOF-WOOF\".\n";
}