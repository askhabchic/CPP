#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) :\
    Form("Presidential Pardon Form", 25, 5) {
        this->setTarget(target);    
        std::cout << "[ <PresidentialPardonForm> constructor called ]\n\n";    }


PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &copy) :\
    Form(copy.getName(), copy.getSignGrade(), copy.getExecGrade()){
    *this = copy;   }

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const &copy) {
    if (this == &copy)
        return *this;
    this->setTarget(copy.getTarget());
    this->setSigned(copy.getSign());
    return *this;   }

void PresidentialPardonForm::action(std::string target){
    std::cout << "<" << target << "> has been pardoned by Zafod Beeblebrox.\n";
}


PresidentialPardonForm::~PresidentialPardonForm()
{
}
