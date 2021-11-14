#include "Zombie.hpp"
#include <iostream>

Zombie *Zombie::newZombie( std::string name){
    Zombie *newZombie = new Zombie;
    newZombie->getName(name);
    std::cout << "<" << name << "> created on the heap\n";
    newZombie->announce();
    return newZombie;
}

void Zombie::deleteZombie(Zombie *newZombie) {
    delete newZombie;
    newZombie = NULL;
}