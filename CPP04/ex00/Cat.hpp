#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
public:
    Cat();
    Cat(Cat &cat);
    Cat & operator=(Cat &cat);
    virtual ~Cat();
    virtual void makeSound() const;
};

#endif