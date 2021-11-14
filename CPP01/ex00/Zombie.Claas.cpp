#include "Zombie.hpp"

Zombie::Zombie( void) { }

Zombie::Zombie (std::string name){
    _name = name;
    return ;
}

Zombie::~Zombie(void){
    std::cout << "<" << _name << "> died !\n";
    return ;
}

std::string Zombie::getName(std::string name){ _name = name;
    return name;
}

void    Zombie::announce( void) {
    std::cout << "<" << _name << ">";
    std::cout << " BraiiiiiiinnnzzzZ...\n";
}