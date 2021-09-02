#include "ClapTrap.hpp"

ClapTrap::ClapTrap()    {
    _name = "Clap";
    initAttribs();
    std::cout << "Default constructor called for ClapTrap <" << _name << ">.\n";
}

ClapTrap::ClapTrap(std::string name){
    this->_name = name;
    initAttribs();
    std::cout << "Named constructor called for ClapTrap <" << _name << ">.\n";
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
    std::cout << "\nDestructor called and destroyed <" << _name << ">.\n";  }

void    ClapTrap::attack(std::string const & target){
    if (_energyPoints != 0)
        this->_energyPoints -= 2;
    this->_hitpoints += 1;
    std::cout << "\nClapTrap <" << _name << "> attack <" << target \
    << ">, causing (" << 2 << ") points of damage!\n";
    std::cout << "<" << _name << "> spent (" << 2 << ") [energy points] to attack and now [energy points] = ("\
    << this->_energyPoints << ").\n";
    std::cout << "<" << _name << "> got (1) [hit point] per attack and now [his points] = (" << _hitpoints << ").\n\n";
 }

void   ClapTrap::takeDamage(unsigned int amount){
    _hitpoints -= 1;
    _energyPoints -= amount;
    _attackDamage += amount;
    std::cout << "ClapTrap <" << _name << "> was attacked and lost (1) [hit Point] = (" << amount \
    << ") [energy Points]. Now his [hit Points] = (" << _hitpoints << ") and [energy Points] = (" << _energyPoints << ").\n";
    std::cout << "ClapTrap <" << _name << "> damaged and now his [attack damage] = (" << _attackDamage << ").\n";
}

void    ClapTrap::beRepaired(unsigned int amount){
    _energyPoints += amount;
    std::cout << "\nClapTrap <" << _name << "> [energy Points] increased by (" << amount << ") and now his [energy Points] = (" << _energyPoints << ").\n";
}

std::string ClapTrap::getName(){
    return this->_name;
}

void ClapTrap::initAttribs(void){
    this->_hitpoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
}
