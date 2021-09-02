#include "ScavTrap.hpp"

ScavTrap::ScavTrap()    {
    initAttribs(100, 50, 20);
    std::cout << "ScavTrap class default constructor called for <" << getName() << ">.\n";
    std::cout << "[hit points] = (" << _hitpoints <<"), [energy points] = (" \
    << _energyPoints << "), [attack damage] = (" << _attackDamage << ").\n\n";
}

ScavTrap::ScavTrap(std::string name) {
    this->_name = name;
    initAttribs(100, 50, 20);
    std::cout << "ScavTrap class named constructor called for <" << getName() << ">.\n";
    std::cout << "[hit points] = (" << _hitpoints <<"), [energy points] = (" \
    << _energyPoints << "), [attack damage] = (" << _attackDamage << ").\n\n";
}

ScavTrap::ScavTrap(ScavTrap &scav){
    *this = scav;
}

ScavTrap & ScavTrap::operator=(ScavTrap const &scav){
    this->_name = scav._name;
    this->_hitpoints = scav._hitpoints;
    this->_energyPoints = scav._energyPoints;
    this->_attackDamage = scav._attackDamage;
    return *this;
}

void ScavTrap::attack(std::string const & target){
    if (_energyPoints != 0)
        this->_energyPoints -= 20;
    this->_hitpoints += 10;
    std::cout << "ScavTrap <" << _name << "> attack <" << target \
    << ">, causing (" << 20 << ") points of damage!\n";
    std::cout << "ScavTrap <" << _name << "> spent (" << 20 << ") [energy points] to attack and now [energy points] = ("\
    << this->_energyPoints << ").\n";
    std::cout << "ScavTrap <" << _name << "> got (10) [hit point] per attack and now [his points] = (" << _hitpoints << ").\n\n";
}

ScavTrap::~ScavTrap()   {
    std::cout << "ScavTrap class destructor called and destroyed <" << getName() << ">.\n";
}

void ScavTrap::guardGate(){
    std::cout << "\nScavTrap <" << getName() << "> have enterred in Gate keeper mode.\n\n";
}