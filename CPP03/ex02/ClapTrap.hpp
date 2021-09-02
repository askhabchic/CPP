#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
protected:
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
    std::string getName(void);
    void initAttribs(unsigned int p1, unsigned int p2, unsigned int p3);
    void setName(std::string name);
};


#endif