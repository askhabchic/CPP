#include "Ice.hpp"

Ice::Ice()  {
    _type = "ice";
    // std::cout << "  *" << _type << " created*.\n";
}

Ice::~Ice() {
    // std::cout << "  *" << _type << " destroied*.\n";
}

AMateria* Ice::clone() const{
    AMateria *ice = new Ice();
    return ice;
}

void Ice::use(ICharacter& target){
    std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}