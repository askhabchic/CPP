#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(){
    Bureaucrat Bob("Bob", 3);
    // Bureaucrat Bob("Bob", 20);
    // Bureaucrat Bob("Bob", 70);
    // Bureaucrat Bob("Bob",140);
    Intern intern;
    Form *form;
    std::cout << Bob << std::endl;
    try     {
        form = intern.makeForm("presidential pardon", "Bender");
        // form = intern.makeForm("robotomy request", "Bender");
        // form = intern.makeForm("shrubbery creation", "Bender");
        // form = intern.makeForm("unknown form", "Bender");
        Bob.signForm(*form);
        Bob.executeForm(*form);
        form->action("Bender");
    }
    catch (std::exception & e)  {
        std::cout << e.what() << std::endl;
    }
    return 0;
}