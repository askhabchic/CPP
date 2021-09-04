#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
private:
    Brain *brain;
public:
    Cat();
    Cat(Cat &cat);
    Cat & operator=(Cat &cat);
    virtual ~Cat();
    virtual void makeSound() const;
    virtual void useBrain(int number);
};

#endif