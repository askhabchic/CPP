#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
private:
    const std::string   _name;
    int                 _grade;
    Bureaucrat();
public:
    Bureaucrat(std::string name, int grade);
    Bureaucrat(Bureaucrat &copy);
    Bureaucrat & operator=(Bureaucrat &copy);
    ~Bureaucrat();

    std::string getName();
    int         getGrade();
    void        incrementGrade();
    void        decrementGrade();
    void        signForm(Form &Form);

    class GradeTooHighException : public std::exception {
        virtual const char* what() const throw();
    };
    class GradeTooLowException : public std::exception  {
        virtual const char* what() const throw();
    };
};

std::ostream & operator<<(std::ostream &out, Bureaucrat &Bur);

#endif