#include "Intern.hpp"

Intern::Intern()  {}

Intern::~Intern()   {}

Intern::Intern(Intern const &copy){
    *this = copy;
}

Intern & Intern::operator=(Intern const &copy){
    (void)copy;
    return *this;
}

Form *Intern::makePresidentialPardonForm(std::string target){
    return new PresidentialPardonForm(target);
}

Form *Intern::makeRobotomyRequestForm(std::string target){
    return new RobotomyRequestForm(target);
}

Form *Intern::makeShrubberyCreationForm(std::string target){
    return new ShrubberyCreationForm(target);
}

Form *Intern::makeForm(std::string formName, std::string target){
    typedef Form *(Intern::*method) (std::string target);
    method formsArray[3] = {
        &Intern::makePresidentialPardonForm,
        &Intern::makeRobotomyRequestForm,
        &Intern::makeShrubberyCreationForm,
    };
    std::string formsNames[3] = {
        "presidential pardon",
        "robotomy request",
        "shrubbery creation",
    };
    for (int i = 0; i < 3; ++i){
        if (formName == formsNames[i]){
            Form *form = (this->*formsArray[i])(target);
            std::cout << "Intern creates <form>.\n";
            return form;    }
    }
    std::cout << "Intern can not create <form> because ";
    throw FormUnknownException();
    return NULL;
}

const char* Intern::FormUnknownException::what() const throw(){
    return "Requested form is not known!\n";     }