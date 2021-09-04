#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
    WrongCat();
    WrongCat(WrongCat &cat);
    WrongCat &operator=(WrongCat &cat);
    ~WrongCat();
    void makeSound() const;
};

#endif