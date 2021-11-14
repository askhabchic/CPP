#include "Form.hpp"

Form::Form() : _name("defaultForm"), _isSigned(false),\
    _gradeToSign(0), _gradeToExec(0) {}

Form::Form(std::string name, int execGrade, int signGrade) : _name(name), _isSigned(false), \
    _gradeToSign(signGrade), _gradeToExec(execGrade) {
    if (_gradeToExec < 1 || _gradeToSign < 1)
        throw GradeTooHighException();
    if (_gradeToExec > 150 || _gradeToSign > 150)
        throw GradeTooLowException();
}

Form::Form(Form &copy) : _name(copy.getName()), _isSigned(copy.getSign()), \
     _gradeToSign(copy.getSignGrade()), _gradeToExec(copy.getExecGrade()) {
    *this = copy;
}

Form & Form::operator=(Form &copy) {
    if (this == &copy)
        return *this;
    this->_isSigned = copy._isSigned;
    return *this;       }

std::string Form::getName() const{
    return this->_name;     }

bool    Form::getSign() const{
    return this->_isSigned;     }

int    Form::getSignGrade() const{
    return this->_gradeToSign;  }

int    Form::getExecGrade() const{
    return this->_gradeToExec;  }

std::string Form::getTarget() const{
    return _target;
}

void    Form::setTarget(std::string target){
    this->_target = target;
}

void    Form::setSigned(bool sign){
    this->_isSigned  = sign;
}

void    Form::beSigned(Bureaucrat &Bureaucrat){
    if (!this->_isSigned && this->_gradeToSign > Bureaucrat.getGrade()){
        std::cout << "<" << Bureaucrat.getName() << " signs <" << this->getName() << ">.\n\n";
        this->_isSigned = true;     }
    else    {
        std::cout << "<" << this->getName() << "> cannot sign <" << this->getName() << "> because ";
        if (this->_isSigned)
            throw FormAlreadySignException();
        if (this->_gradeToSign < Bureaucrat.getGrade())
            throw GradeTooLowException();   }
}

void   Form::execute(Bureaucrat const & executor) const{
    if (executor.getGrade() < this->_gradeToExec && this->_isSigned)
        std::cout << "<" << executor.getName() << "> executes <" << this->getName() << ">.\n\n";
    else    {
        std::cout << "<" << executor.getName() << "> cannot executes <" << this->getName() << "> because ";
        if (executor.getGrade() > this->_gradeToExec)
            throw Form::GradeTooLowException();
        else if (!this->_isSigned)
            throw Form::FormNotSignException(); }
}

const char* Form::GradeTooHighException::what() const throw(){
    return "Grade too high for this form!\n";     }

const char* Form::GradeTooLowException::what() const throw(){
    return "Grade too low for this form!\n";      }

const char* Form::FormAlreadySignException::what() const throw(){
    return "Form already signed!\n";    }

const char* Form::FormNotSignException::what() const throw(){
    return "Form not signed!\n";    }

Form::~Form()   {}

std::ostream & operator<<(std::ostream &out, Form &form){
    out << "<" << form.getName() << "> has:\n - grade required to sign: "\
    << form.getSignGrade() << ";\n - grade required to execute: " \
    << form.getExecGrade() << ";\n - form is signed: " << form.getSign() << std::endl;
    return out;     }
