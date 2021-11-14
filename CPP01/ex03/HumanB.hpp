#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB {
private:
    Weapon      *_Weapon;
    std::string _name;
public:
    void        attack();
    void        setWeapon(Weapon &Weapon);
    HumanB(std::string name);
    ~HumanB();
};

#endif