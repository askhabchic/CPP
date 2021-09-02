#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
protected:
    static const int hitpoints = 100;
    static const int energyPoints = 100;
    static const int attackDamage = 30;

public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(FragTrap &frag);
    FragTrap & operator=(FragTrap const &frag);
    ~FragTrap();
    void highFivesGuys(std::string name);
};


#endif