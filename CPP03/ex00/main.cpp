#include "ClapTrap.hpp"

int main(){
    ClapTrap Clap("Tom");
    Clap.attack("target");
    Clap.takeDamage(5);
    Clap.beRepaired(2);
}