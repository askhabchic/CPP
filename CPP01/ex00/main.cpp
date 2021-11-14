#include "Zombie.hpp"

int main(void)
{
    Zombie Z("Zomb");
    Z.announce();
    Z.deleteZombie(Z.newZombie("heapZomb"));
    Z.randomChump("ctackZomb");
}