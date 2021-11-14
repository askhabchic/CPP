#include "Zombie.hpp"

Zombie* Zombie::zombieHorde( int N, std::string name ){
    Zombie *Horde = new Zombie[N];
    for (int i =0; i < N; ++i){
        Horde[i]._name = name;
        Horde[i].announce();
    }
    return Horde;
}

void    Zombie::deleteHorde(Zombie *Horde){
    delete [] Horde;
}