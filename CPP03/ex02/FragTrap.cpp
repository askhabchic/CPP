#include "FragTrap.hpp"

FragTrap::FragTrap(){
    initAttribs(100, 100, 30);
    std::cout << "FragTrap class default contructor called for <" << getName() << ">.\n\n";
}

FragTrap::FragTrap(std::string name){
    this->_name = name;
    initAttribs(100, 100, 30);
    std::cout << "FragTrap class named constructor called for <" << getName() << ">.\n\n";
}

FragTrap::FragTrap(FragTrap &frag){
    *this = frag;
    std::cout << "FragTrap class copy constructor called for <" << getName() << ">.\n";
}

FragTrap & FragTrap::operator=(FragTrap const &frag){
    this->_name = frag._name;
    this->_hitpoints = frag._hitpoints;
    this->_energyPoints = frag._energyPoints;
    this->_attackDamage = frag._attackDamage;
    return *this;
}

FragTrap::~FragTrap(){
    std::cout << "\nFragTrap class destructor called and destroyed <" << getName() << ">.\n";
}

void FragTrap::highFivesGuys(std::string name){
    std::cout << "\nThis is a special FragTrap skill - high five from " << name << "!\n"; 
}