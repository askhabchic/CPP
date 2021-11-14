#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) :\
    Form("Robotomy Request Form", 45, 72) {
        this->setTarget(target);
        std::cout << "[ <RobotomyRequestForm> constructor called ]\n\n";    }

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &robot){
    *this = robot;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const &robot){
    if (this == &robot)
        return *this;
    this->setTarget(robot.getTarget());
    this->setSigned(robot.getSign());
    return *this;
}

void RobotomyRequestForm::action(const std::string target){
    srand(static_cast<unsigned int>(time(0)));
    int r;
    for (int i = 0; i < 10; ++i)
        r = rand();
    std::cout << "<" << this->getName() << "> * make some drilling noises * \n";
    if (r / 2)
        std::cout << "<" << target << "> has been robotomized successfully.\n\n";
    else
        std::cout << "<" << target << ">'s robotomization failed.\n\n";
}

RobotomyRequestForm::~RobotomyRequestForm() {
}