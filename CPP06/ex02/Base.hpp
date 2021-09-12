#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <ctime>
# include <cstdlib>

class Base
{   public: virtual ~Base();    };

class A : public Base   {
    public: 
        static std::string type;;    };
class B : public Base   {
    public: 
        static std::string type;  };
class C : public Base   {
    public: 
        static std::string type;  };

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif