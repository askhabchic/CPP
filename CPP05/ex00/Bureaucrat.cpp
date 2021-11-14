#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()    {
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
    if (_grade < 1)
        throw GradeTooLowException();
    if (_grade > 150)
        throw GradeTooHighException();
}

Bureaucrat::Bureaucrat(Bureaucrat &copy) : _name(copy._name) {
    *this = copy;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat &copy){
    if (this == &copy)
        return *this;
    this->_grade = copy._grade;
    return *this;   }

Bureaucrat::~Bureaucrat()   {}

std::string     Bureaucrat::getName() const{
    return this->_name;     }

int     Bureaucrat::getGrade() const{
    return this->_grade;    }

void     Bureaucrat::incrementGrade(){
    if ((_grade - 1) < 1)
        throw GradeTooHighException();
    _grade--;
}

void     Bureaucrat::decrementGrade(){
    if ((_grade + 1) > 150)
        throw GradeTooLowException();
    _grade++;
}

const char *Bureaucrat::GradeTooHighException::what() const throw(){
    return "Grade too high.\n";
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
    return "Grade too low.\n";
}

std::ostream & operator<<(std::ostream &out, Bureaucrat &Bur){
    out << "<" << Bur.getName() << ">, bureaucrat grade <" << Bur.getGrade() << ">.\n";
    return out;
}