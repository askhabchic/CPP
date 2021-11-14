#include "Zombie.hpp"
#include <string>

int main(void){
    Zombie Zomb;
    Zomb.setName("Zomb");
    Zomb.announce();
    Zombie *Horde = Zomb.zombieHorde(10, "Zomb");
    Zomb.deleteHorde(Horde);
}