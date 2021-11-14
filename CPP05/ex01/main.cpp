#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){
    Bureaucrat Bob("Bob", 50);
    Form Form("Document", 50, 40);
    std::cout << Bob << std::endl;
    try
    {
        std::cout << Form << std::endl;
        Form.beSigned(Bob);
        std::cout << Form << std::endl;
        Bob.signForm(Form);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}