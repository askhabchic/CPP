#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include <cstdlib>
# include <ctime>

class RobotomyRequestForm : public Form
{
private:
    RobotomyRequestForm();
public:
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(RobotomyRequestForm const &robot);
    RobotomyRequestForm & operator=(RobotomyRequestForm const &robot);
    virtual void action(std::string target);
    ~RobotomyRequestForm();
};

#endif