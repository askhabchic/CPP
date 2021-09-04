#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
    AMateria *materias[4];
public:
    MateriaSource();
    MateriaSource(MateriaSource &materia);
    MateriaSource & operator=(MateriaSource &materia);
    virtual ~MateriaSource();
    virtual void learnMateria(AMateria *materia);
    virtual AMateria* createMateria(std::string const & type);
};

#endif