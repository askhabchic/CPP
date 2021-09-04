#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
protected:
    std::string type;
public:
    WrongAnimal();
    WrongAnimal(WrongAnimal &wrong);
    WrongAnimal & operator=(WrongAnimal &wrong);
    ~WrongAnimal();
    void makeSound() const;
    std::string getType(void) const;
};

#endif