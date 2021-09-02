#include "ClapTrap.hpp"

ClapTrap::ClapTrap()    {
    _name = "defaultClap";
    initAttribs(10, 10, 0);
    std::cout << "ClapTrap default constructor called for <" << _name << ">.\n";
}

ClapTrap::ClapTrap(std::string name){
    this->_name = name;
    initAttribs(10, 10, 0);
    std::cout << "ClapTrap named constructor called for <" << _name << ">.\n";
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
    std::cout << "ClapTrap destructor called and destroyed <" << _name << ">.\n\n";  }

void    ClapTrap::attack(std::string const & target){
    if (_energyPoints != 0)
        this->_energyPoints -= 20;
    this->_hitpoints += 10;
    std::cout << "\n<" << _name << "> attack <" << target \
    << ">, causing (" << 20 << ") points of damage!\n";
    std::cout << "<" << _name << "> spent (" << 20 << ") [energy points] to attack and now [energy points] = ("\
    << this->_energyPoints << ").\n";
    std::cout << "<" << _name << "> got (10) [hit point] per attack and now [his points] = (" << _hitpoints << ").\n\n";
 }

void   ClapTrap::takeDamage(unsigned int amount){
    _hitpoints -= 10;
    _energyPoints -= amount;
    _attackDamage += amount;
    std::cout << "<" << _name << "> was attacked and lost (10) [hit Point] = (" << amount \
    << ") [energy Points]. Now his [hit Points] = (" << _hitpoints << ") and [energy Points] = (" << _energyPoints << ").\n";
    std::cout << "<" << _name << "> damaged and now his [attack damage] = (" << _attackDamage << ").\n";
}

void    ClapTrap::beRepaired(unsigned int amount){
    _energyPoints += amount;
    std::cout << "\n<" << _name << "> [energy Points] increased by (" << amount << ") and now his [energy Points] = (" << _energyPoints << ").\n";
}

std::string ClapTrap::getName(){
    return this->_name;
}

void ClapTrap::initAttribs(unsigned int p1, unsigned int p2, unsigned int p3){
    this->_hitpoints = p1;
    this->_energyPoints = p2;
    this->_attackDamage = p3;
}

void ClapTrap::setName(std::string name){
    this->_name = name;
}

