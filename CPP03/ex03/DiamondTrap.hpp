#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
    std::string _diamName;
public:
    DiamondTrap(/* args */);
    DiamondTrap(std::string name);
    DiamondTrap(DiamondTrap &diamond);
    DiamondTrap & operator=(DiamondTrap const &diamond);
    ~DiamondTrap();
    void attack(std::string const & target);
    void whoAmI();
};


#endif