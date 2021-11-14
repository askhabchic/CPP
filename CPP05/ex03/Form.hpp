#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <fstream>
# include <sstream>

class Bureaucrat;

class Form
{
private:
    const std::string   _name;
    std::string         _target;
    bool                _isSigned;
    const int           _gradeToSign;
    const int           _gradeToExec;
protected:
    Form();
public:
    Form(const std::string name, const int execGrade, const int signGrade);
    Form(Form &copy);
    Form & operator=(Form &copy);
    ~Form();
    void        beSigned(Bureaucrat &Bureaucrat);

    std::string     getName() const;
    bool            getSign() const;
    int             getSignGrade() const;
    int             getExecGrade() const;
    std::string     getTarget() const;
    void            setTarget(std::string target);
    void            setSigned(bool sign);

    virtual void    action(const std::string target) = 0;
    void            execute(Bureaucrat const & executor) const;

    class GradeTooHighException : public std::exception {
        virtual const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
        virtual const char* what() const throw();
    };
    class FormAlreadySignException : public std::exception {
        virtual const char* what() const throw();
    };
    class FormNotSignException : public std::exception {
        virtual const char* what() const throw();
    };
};

std::ostream & operator<<(std::ostream &out, Form &form);

#endif