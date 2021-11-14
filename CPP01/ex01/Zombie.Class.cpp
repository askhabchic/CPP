#include "Zombie.hpp"

Zombie::Zombie (void){
}

Zombie::~Zombie (void){
    std::cout << "<" << _name << "> died!\n";
}

void    Zombie::announce( void) {
    std::cout << "<" << _name << ">";
    std::cout << " BraiiiiiiinnnzzzZ...\n";
}

std::string Zombie::setName(std::string name){
    return _name = name;
}