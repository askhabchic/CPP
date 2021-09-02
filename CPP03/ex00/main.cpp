#include "ClapTrap.hpp"

int main(){
    ClapTrap Tom("Tom");
    ClapTrap Clap;
    Tom.attack(Clap.getName());
    Clap.takeDamage(5);
    Tom.beRepaired(2);
    Clap.beRepaired(2);
}