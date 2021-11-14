#ifndef SHRUBBERRYCREATIONFORM_HPP
# define SHRUBBERRYCREATIONFORM_HPP

# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
    ShrubberyCreationForm();
public:
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(ShrubberyCreationForm &copy);
    ShrubberyCreationForm & operator=(ShrubberyCreationForm &copy);
    virtual void action(std::string target);
    ~ShrubberyCreationForm();
    class ShrubberyCantOpenFile : public std::exception {
        virtual const char* what() const throw();
    };
    class ShrubberyCantWriteToFile : public std::exception {
        virtual const char* what() const throw();
    };
};

#endif