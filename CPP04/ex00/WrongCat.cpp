#include "WrongCat.hpp"

WrongCat::WrongCat()    {
    type = "WrongCat";
    std::cout << "WrongCat default constructor called for <" << type << ">.\n";
}

WrongCat::WrongCat(WrongCat &cat){
    *this = cat;
}

WrongCat & WrongCat::operator=(WrongCat &cat){
    this->type = cat.type;
    return *this;
}

WrongCat::~WrongCat()   {
    std::cout << "WrongCat destructor called for <" << type << ">.\n";
}

void    WrongCat::makeSound() const {
    std::cout << "WrongCat called makeSound method for <" << type << ">.\n\n";
}