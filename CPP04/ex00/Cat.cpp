#include "Cat.hpp"

Cat::Cat()  {
    type = "Cat";
    std::cout << "Cat class default constructor called for <" << type << ">.\n"; }

Cat::Cat(Cat &cat)  {
    *this = cat;    }

Cat & Cat::operator=(Cat &cat){
    this->type = cat.type;
    return *this;   }

Cat::~Cat() {
    std::cout << "Cat class destructor called for " << type << ">.\n";  }

void Cat::makeSound() const{
    std::cout << "Cat class object with type <" << type << "> make \"MEOW-MEOW-MEOW\".\n";  }