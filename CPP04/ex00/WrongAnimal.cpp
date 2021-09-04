#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()  {
    type = "WrongAnimal";
    std::cout << "\nWrongAnimal default constructor called for <" << type << ">.\n";
}

WrongAnimal::WrongAnimal(WrongAnimal &wrong){
    *this = wrong;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal &wrong){
    this->type = wrong.type;
    return *this;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called for <" << type << ">.\n\n";
}

void    WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal called makeSound method for <" << type << ">.\n\n";
}

std::string WrongAnimal::getType(void) const{
    return this->type;
}