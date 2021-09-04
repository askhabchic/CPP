#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
private:
    std::string ideas[100];
public:
    Brain();
    Brain(Brain &copy);
    Brain &     operator=(Brain &brain);
    virtual     ~Brain();
    static void        animalHasBrain(std::string type, int number);
};


#endif