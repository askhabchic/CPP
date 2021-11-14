#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie {
    std::string _name;

public:
    void        announce( void);
    Zombie      ( std::string name);
    std::string getName(std::string);
    
    Zombie      *newZombie( std::string name);
    void        deleteZombie(Zombie *newZombie);
    void        randomChump( std::string name);
    
    Zombie      ( void);
    ~Zombie     ( void);
};


#endif