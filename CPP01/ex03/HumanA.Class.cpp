#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &aWeapon) : _name(name), _Weapon(aWeapon)  {
}

HumanA::~HumanA()   {
}

void    HumanA::attack(void){
    std::cout << _name << " attacks with " << _Weapon.getType() << std::endl;
}