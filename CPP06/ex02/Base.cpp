#include "Base.hpp"

std::string A::type = "A";
std::string B::type = "B";
std::string C::type = "C";

Base::~Base()   {}

Base * generate(void){
    // srand(time(0));
    switch (rand() % 4)
    {
    case 1:
        return new A;
    case 2:
        return new B;
    case 3:
        return new C;
    default:
        return 0;
    }
}

void identify(Base* p){
    if (dynamic_cast<A*>(p))
        std::cout << "Type of *p is A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "Type of *p is B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "Type of *p is C" << std::endl;
    else
        std::cout << "None of the types're suitable\n";
}

void identify(Base& p){
    if ((void *)&p == NULL){
        std::cout << "Reference cannot point to a NULL\n";
        return ;
    }
    try{
        A &a = dynamic_cast<A&>(p);
        std::cout << "Type of &p is " << a.type << std::endl;
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;
    }
    try{
        B &b = dynamic_cast<B&>(p);
        std::cout << "Type of &p is " << b.type << std::endl;
    }
    catch (std::exception &e){
         std::cerr << e.what() << std::endl;
    }
    try{
        C &c = dynamic_cast<C&>(p);
        std::cout << "Type of &p is " << c.type << std::endl;
    }
    catch (std::exception &e){
         std::cerr << e.what() << std::endl;
    }
}

