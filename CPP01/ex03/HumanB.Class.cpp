#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) {
    _name = name;
    _Weapon = NULL;
}

HumanB::~HumanB()   {
}

void    HumanB::setWeapon(Weapon &Weapon){
    _Weapon = &Weapon;
}

void    HumanB::attack(){
    if (!_Weapon)
        std::cout << _name << "attacks without weapon\n";
    else
        std::cout << _name << " attacks with " << _Weapon->getType() << std::endl;
}