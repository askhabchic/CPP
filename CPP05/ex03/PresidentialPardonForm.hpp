#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
    PresidentialPardonForm();
public:
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(PresidentialPardonForm &copy);
    PresidentialPardonForm & operator=(PresidentialPardonForm const &copy);
    virtual void action(std::string target);
    ~PresidentialPardonForm();
};

#endif