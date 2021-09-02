#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
protected:
    static const int hitpoints = 100;
    static const int energyPoints = 50;
    static const int attackDamage = 20;
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(ScavTrap &scav);
    ScavTrap & operator=(ScavTrap const &scav);
    ~ScavTrap();
    void attack(std::string const & target);
    void guardGate();
};


#endif