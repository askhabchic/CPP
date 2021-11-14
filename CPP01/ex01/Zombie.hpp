#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie {
    std::string _name;
    int         _N;

public:
    Zombie  ( void);
    ~Zombie ( void);
    void        announce( void);
    std::string setName(std::string);
    Zombie*     zombieHorde( int N, std::string name );
    void        deleteHorde(Zombie *Horde);
};

#endif