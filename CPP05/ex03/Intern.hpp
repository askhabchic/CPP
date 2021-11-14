#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"


class Intern
{
private:
    Form *makePresidentialPardonForm(std::string target);
    Form *makeRobotomyRequestForm(std::string target);
    Form *makeShrubberyCreationForm(std::string target);
public:
    Intern();
    ~Intern();
    Intern(Intern const &copy);
    Intern & operator=(Intern const &copy);
    Form *makeForm(std::string formType, std::string target);

    class FormUnknownException : public std::exception  {
        virtual const char* what() const throw();
    };
};


#endif