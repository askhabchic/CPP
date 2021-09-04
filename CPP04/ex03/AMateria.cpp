#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type) {
    // std::cout << "AMateria named constructor called for " << _type << ".\n";
}

AMateria::AMateria(){
    _type = "name";
    // std::cout << "Default constructor for AMateria called.\n";
}

AMateria::~AMateria(){
    // std::cout << "Destructor for AMateria called.\n";
}

std::string const & AMateria::getType() const{
    return this->_type;
}

void AMateria::use(ICharacter& target){
    target.getName();
    // std::cout << target.getName() << " used.\n";
}