#include <iostream>
#include <string>

int main(void){
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Address to string:   " << &str << \
    "\nPointer to string:   " << stringPTR <<\
    "\nReference to string: " << &stringREF << std::endl;

    std::cout << "\nValue of string by PTR: " << *stringPTR <<\
    "\nValue of string by REF: " << stringREF << std::endl;
}