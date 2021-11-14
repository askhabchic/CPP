#include "Form.hpp"

Form::Form() : _name("defaultForm"), _isSigned(false),\
    _gradeToSign(0), _gradeToExec(0) {}

Form::Form(std::string name, int signGrade, int execGrade) : _name(name), _isSigned(false), \
    _gradeToSign(signGrade), _gradeToExec(execGrade) {
    if (_gradeToExec < 1 || _gradeToSign < 1)
        throw GradeTooHighException();
    if (_gradeToExec > 150 || _gradeToSign > 150)
        throw GradeTooLowException();
}

Form::Form(Form &copy) : _name(copy.getName()), _isSigned(copy.getSign()), \
    _gradeToSign(copy.getSignGrade()), _gradeToExec(copy.getExecGrade()) {
    *this = copy;   }

Form & Form::operator=(Form &copy) {
    if (this == &copy)
        return *this;
    this->_isSigned = copy._isSigned;
    return *this;       }

std::string Form::getName() const{
    return this->_name;     }

void    Form::beSigned(Bureaucrat &Bureaucrat){
    if (!this->_isSigned && this->_gradeToSign >= Bureaucrat.getGrade()){
        std::cout << "<" << Bureaucrat.getName() << " signs <" << this->getName() << ">.\n\n";
        this->_isSigned = true;     }
    else    {
        std::cout << "<" << this->getName() << "> cannot sign <" << this->getName() << "> because ";
        if (this->_isSigned)
            throw FormAlreadySignException();
        if (this->_gradeToSign < Bureaucrat.getGrade())
            throw GradeTooLowException();   }
}

bool    Form::getSign() {
    return this->_isSigned;     }

int    Form::getSignGrade() const{
    return this->_gradeToSign;  }

int    Form::getExecGrade() const{
    return this->_gradeToExec;  }

const char* Form::GradeTooHighException::what() const throw(){
    return "Form: grade too high for this form!";     }

const char* Form::GradeTooLowException::what() const throw(){
    return "Form: grade too low for this form!";      }

const char* Form::FormAlreadySignException::what() const throw(){
    return "Form already signed!";    }

Form::~Form()   {}

std::ostream & operator<<(std::ostream &out, Form &form){
    out << "<" << form.getName() << "> has:\n - grade required to sign: "\
    << form.getSignGrade() << ";\n - grade required to execute: " \
    << form.getExecGrade() << ";\n - form is signed: " << form.getSign() << std::endl;
    return out;     }
