#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()    {
    this->_diamName = "Diamond_name";
    ClapTrap::_name = _diamName + "_clap_name";
    initAttribs(FragTrap::hitpoints, ScavTrap::energyPoints, FragTrap::attackDamage);
    std::cout << "DiamondTrap default constructor called for <" << _diamName << ">.\n";
    std::cout << "DiamondTrap <" << _diamName << "> has: \n                         - [hit points] = (" << this->_hitpoints << ");";
    std::cout << "\n                         - [energy points] = (" << this->_energyPoints << ");";
    std::cout << "\n                         - [attack damage] = (" << this->_attackDamage << ");\n\n";
}

DiamondTrap::DiamondTrap(std::string name)    {
    ClapTrap::_name = name + "_clap_name";
    this->_diamName = name;
    initAttribs(FragTrap::hitpoints, ScavTrap::energyPoints, FragTrap::attackDamage);
    std::cout << "DiamondTrap named constructor called for <" << _diamName << ">.\n\n";
    std::cout << "DiamondTrap <" << _diamName << "> has: \n                         - [hit points] = (" << this->_hitpoints << ");";
    std::cout << "\n                         - [energy points] = (" << this->_energyPoints << ");";
    std::cout << "\n                         - [attack damage] = (" << this->_attackDamage << ");\n\n";
}

DiamondTrap::~DiamondTrap() {
    std::cout << "\nDiamodTrap destructor called and destroyed <" << _diamName << ">.\n";  }

void DiamondTrap::attack(std::string const & target)    {
    ScavTrap::attack(target);   }

void DiamondTrap::whoAmI(){
    std::cout << "\nHi, my name is <" << _diamName << "> amd my parent class name is <" << _name << ">.\n";
}