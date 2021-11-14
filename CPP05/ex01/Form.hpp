#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    const std::string   _name;
    bool                _isSigned;
    const int           _gradeToSign;
    const int           _gradeToExec;
    Form();

public:
    Form(const std::string name, const int execGrade, const int signGrade);
    Form(Form &copy);
    Form & operator=(Form &copy);
    ~Form();
    void        beSigned(Bureaucrat &Bureaucrat);

    std::string getName() const;
    bool        getSign();
    int         getSignGrade() const;
    int         getExecGrade() const;

    class GradeTooHighException : public std::exception {
        virtual const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
        virtual const char* what() const throw();
    };
    class FormAlreadySignException : public std::exception {
        virtual const char* what() const throw();
    };
};

std::ostream & operator<<(std::ostream &out, Form &form);

#endif