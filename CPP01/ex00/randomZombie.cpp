#include "Zombie.hpp"

void Zombie::randomChump( std::string name){
    Zombie Zombie;
    Zombie.getName(name); 
    std::cout << "<" << name << "> created on the stack\n";
    Zombie.announce();
}