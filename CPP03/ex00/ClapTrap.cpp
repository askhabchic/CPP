#include "ClapTrap.hpp"

ClapTrap::ClapTrap()    {
    std::cout << "Default constructor called" << std::endl;
    _name = "name";
    _hitpoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name){
    this->_name = name;
    this->_hitpoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap &clap){
    *this = clap;   }

ClapTrap & ClapTrap::operator=(ClapTrap const &clap)    {
    this->_name = clap._name;
    this->_hitpoints = clap._hitpoints;
    this->_energyPoints = clap._energyPoints;
    this->_attackDamage = clap._attackDamage;
    return *this;   }

ClapTrap::~ClapTrap()   {
    std::cout << "Destructor called" << std::endl;  }

void    ClapTrap::attack(std::string const & target){
    if (!_energyPoints)
        _energyPoints -= 1;
    std::cout << "ClapTrap <" << _name << "> attack <" << target \
    << ">, causing <" << _attackDamage << "> points of damage!\n";
 }

void   ClapTrap::takeDamage(unsigned int amount){
    _hitpoints -= amount;
    _attackDamage++;
    // _energyPoints -= amount;
    std::cout << _name << " damaged " << _attackDamage << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount){
    // _energyPoints += amount;
    _hitpoints += amount;
    std::cout << _name << " energy point increased by " << amount << " and now energy points = " << _energyPoints << std::endl;
    std::cout << _name << " hitpoint increased by " << amount << " and now hitpoints = " << _hitpoints << std::endl;

}
