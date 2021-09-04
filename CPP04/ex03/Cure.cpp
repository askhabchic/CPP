#include "Cure.hpp"

Cure::Cure()  {
    _type = "cure";
    // std::cout << "  *" << _type << " created.\n";
}

Cure::~Cure()   {
    // std::cout << "  *"<< _type << " destroied.\n";
}

AMateria* Cure::clone() const{
    AMateria *cure = new Cure();
    return cure;
}

void Cure::use(ICharacter& target){
    std::cout << "* heals " << target.getName() << "’s wounds *\n";
}
