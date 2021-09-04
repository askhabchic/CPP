#include "Cat.hpp"

Cat::Cat()  {
    type = "Cat";
    std::cout << "  Cat class default constructor called for <" << type << ">.\n"; 
    brain = new Brain();    }

Cat::Cat(Cat &cat)  {
    std::cout << "  Cat class copy constructor called for <" << type << ">.\n"; 
    this->operator=(cat);    }

Cat & Cat::operator=(Cat &cat){
    this->type = cat.type;
    this->brain = new Brain(*cat.brain);
    return *this;   }

Cat::~Cat() {
    delete brain;
    std::cout << "  Cat class destructor called for <" << type << ">.\n";  }

void Cat::makeSound() const{
    std::cout << "Cat class object with type <" << type << "> make \"MEOW-MEOW-MEOW\".\n";  }

void Cat::useBrain(int number){
    Brain::animalHasBrain(this->getType(), number);
}