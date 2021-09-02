#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(){
    ScavTrap Tom("Tom");
    ScavTrap Scav("Jerry");
    Tom.attack("Jerry");
    Scav.takeDamage(50);
    Tom.beRepaired(20);
    Scav.beRepaired(20);
    Tom.guardGate();
}