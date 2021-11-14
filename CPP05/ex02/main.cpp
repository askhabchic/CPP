#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(){
    Bureaucrat Bob("Bob", 20);
    // Bureaucrat Bob("Bob", 70);
    // Bureaucrat Bob("Bob",140);
    ShrubberyCreationForm form(Bob.getName());
    std::cout << Bob << std::endl;
    try     {
        std::cout << form << std::endl;
        Bob.signForm(form);
        Bob.executeForm(form);
        std::cout << form << std::endl;
        form.action(Bob.getName());
    }
    catch (std::exception & e)  {
        std::cout << e.what() << std::endl;
    }
    RobotomyRequestForm robot(Bob.getName());
    try     {
        std::cout << robot << std::endl;
        Bob.signForm(robot);
        Bob.executeForm(robot);
        std::cout << robot << std::endl;
        robot.action(Bob.getName());
    }
    catch (std::exception & e)  {
        std::cout << e.what() << std::endl;
    }
    PresidentialPardonForm prs(Bob.getName());
    try     {
        std::cout << prs << std::endl;
        Bob.signForm(prs);
        Bob.executeForm(prs);
        std::cout << prs << std::endl;
        prs.action(Bob.getName());
    }
    catch (std::exception & e)  {
        std::cout << e.what() << std::endl;
    }
    return 0;
}