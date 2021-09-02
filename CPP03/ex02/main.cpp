#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(){
    FragTrap Tom("Tom");
    FragTrap Frag("Jerry");
    Tom.attack("Jerry");
    Frag.takeDamage(50);
    Tom.beRepaired(20);
    Frag.beRepaired(20);
    Tom.highFivesGuys(Tom.getName());
    Frag.highFivesGuys(Frag.getName());
}