#include "Character.hpp"

Character::Character()    {
    // std::cout << "Character default constructor called.\n";
}

Character::Character(std::string name){
    _name = name;
    // std::cout << _name << " was born.\n";
    for (int i = 0; i < 4; ++i)
        materia[i] = NULL;
}

Character::Character(const Character &charac){
    std::cout << "Character copy constructor called.\n";
    this->_name = charac._name;
    int i = 0;
    while (charac.materia[i])
        materia[i] = charac.materia[i]->clone();
}

Character & Character::operator=(const Character &copy){
    int i = 0;
    this->_name = copy.getName();
    while (i < 4){
        if (this->materia[i])
            delete this->materia[i];
        if (copy.materia[i])
            materia[i] = copy.materia[i]->clone();
        i++;    }
    return *this;
}


Character::~Character() {
    for (int i = 0; i < 4; ++i)
        if (materia[i])
            materia[i] = NULL;
    // std::cout << this->getName() << " died.\n";
}

std::string const & Character::getName() const{
    return _name;
}
void Character::equip(AMateria* m){
    for (int i = 0; i < 4; ++i)
        if (!materia[i]){
            materia[i] = m;
            return ;
        }
}
void Character::unequip(int idx){
    if (idx >= 0 && idx < 4 && materia[idx])
        materia[idx] = NULL;
}

void Character::use(int idx, ICharacter& target){
    if (idx >= 0 && idx < 4 && materia[idx])
        materia[idx]->use(target);
}
