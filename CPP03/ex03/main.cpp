#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(){
    DiamondTrap Diamond("Tom");
    DiamondTrap Trap;
    // DiamondTrap Diamond;
    Diamond.attack(Trap.getName());
    Trap.takeDamage(30);
    Diamond.beRepaired(50);
    Trap.beRepaired(50);
    Diamond.guardGate();
    Diamond.highFivesGuys(Diamond.getName());
    Diamond.whoAmI();
}