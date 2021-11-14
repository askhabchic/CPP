#include "Bureaucrat.hpp"

int main(){
    try
    {
        Bureaucrat Bob("Bob", 152);
        std::cout << Bob << std::endl;
        Bob.incrementGrade();
        std::cout << Bob << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    Bureaucrat Karl("Karl", 1);
    std::cout << Karl << std::endl;
    try
    {
        Karl.incrementGrade();
        std::cout << Karl << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    Bureaucrat Tom("Tom", 150);
    std::cout << Tom << std::endl;
    try
    {
        Tom.decrementGrade();
        std::cout << Tom << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}