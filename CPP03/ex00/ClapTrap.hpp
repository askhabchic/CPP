#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
private:
    std::string     _name;
    unsigned int    _hitpoints;
    unsigned int    _energyPoints;
    unsigned int    _attackDamage;
public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(ClapTrap &clap);
    ClapTrap & operator=(ClapTrap const &clap);
    ~ClapTrap();
    void attack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

};


#endif