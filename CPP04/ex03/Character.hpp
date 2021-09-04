#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"

class Character : public ICharacter
{
private:
    AMateria *materia[4];
    std::string _name;
public:
    Character();
    Character(std::string name);
    Character(const Character &charac);
    Character & operator=(const Character &copy);
    virtual ~Character();
    virtual std::string const & getName() const;
    virtual void equip(AMateria* m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter& target);
};


#endif
