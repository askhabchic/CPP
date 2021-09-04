#include "Brain.hpp"

Brain::Brain(){
    std::cout << "    Congratulation! Brain was created!!!\n\n";
}

Brain::Brain(Brain &copy){
    std::cout << "    Congratulation! Brain was copied!!!\n";
    this->operator=(copy);
}

Brain & Brain::operator=(Brain &brain)  {
    for (int i = 0; i < 100; ++i)
        this->ideas[i] = brain.ideas[i];
    return *this;
}

Brain::~Brain() {
    std::cout << "\nBrain destructor called.\n";
}

void    Brain::animalHasBrain(std::string type, int number){
    std::cout << "Hi from <" << type << "> with number (" << number << "). This's how I use my brain!\n";
}

