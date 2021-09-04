#include "MateriaSource.hpp"

MateriaSource::MateriaSource()  {
    for (int i = 0; i < 4; ++i)
        materias[i] = NULL;
    // std::cout << "MateriaSource default constructor called.\n";
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; ++i)
        if (materias[i])
            delete materias[i];
    // std::cout << "MateriaSource destructor called.\n";
}

MateriaSource::MateriaSource(MateriaSource &materia){
    this->operator=(materia);   }

MateriaSource & MateriaSource::operator=(MateriaSource &materia){
    for (int i = 0; i < 4; ++i)
        this->materias[i] = materia.materias[i];
    return *this;   }

void MateriaSource::learnMateria(AMateria *materia){
    for (int i = 0; i < 4; ++i)
        if (!materias[i]){
            materias[i] = materia;
            return ; }
}

AMateria* MateriaSource::createMateria(std::string const & type){
    for (int i = 0; i < 4; ++i)
        if (materias[i]->getType() == type)
            return materias[i];
    return NULL;
}
