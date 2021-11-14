#include "Weapon.hpp"

Weapon::~Weapon(){
}

Weapon::Weapon(std::string weaponType){
    std::cout << "Weapon type: " << weaponType << "\n";
    setType(weaponType);
}

void    Weapon::setType(std::string str)    {
    _type = str;
}

std::string const & Weapon::getType(void) const{
    return _type;
}
