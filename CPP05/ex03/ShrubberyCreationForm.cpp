#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : \
    Form("Shrubbery Creation Form", 145, 137) {
        this->setTarget(target);
        std::cout << "[ <ShrubberyCreationForm> constructor called ]\n\n";    }

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &copy){
    *this = copy;    }

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &copy){
    if (this == &copy)
        return *this;
    this->setTarget(copy.getTarget());
    this->setSigned(copy.getSign());
    return *this;
}

void    ShrubberyCreationForm::action(std::string target){
    std::string tree = "                    _____                    \n"\
                       "              _,-```      `````--.--__       \n"\
                       "            , - `` __ ,, -            |      \n"\
                       "         ,'       __,--''''dF      )  /      \n"\
                       "        /      .-'lb_,--''dF      /  '|_     \n"\
                       "       ,'         _lb ___dF'-._,-'      |    \n"\
                       "      ,'      _,-''''   ''--..__.,      ;    \n"\
                       "     (, - '`.                    ;,    ,'    \n"\
                       "      `._, `_ _;                  ;   ;      \n"\
                       "       ,'     ,' `-'lb-.___..._,-'     ;     \n"\
                       "       |     ,'lb.-'ll`-.dlF' ',      ;'     \n"\
                       "        `--'   'lb  ll  dF'     '-__-'       \n"\
                       "                'lb ll dF                    \n"\
                       "                 'lblldF                     \n"\
                       "                  |lllF                      \n"\
                       "                  |lll|                      \n"\
                       "                  |lll|                      \n"\
                       "                  |lll|                      \n"\
                       "                  dlllb                      \n"\
                       "                .dFd | blb.                  \n"\
                       "      o       .dlFdl|lbTlb.          o /     \n"\
                       "  Y |   __, dllFdll | lllollb .__ Krogg Y    \n";
    std::fstream file;
    file.exceptions(std::fstream::badbit | std::fstream::failbit);
    try{
        file.open(target + "_shrubbery", std::fstream::out);
        if (file.fail())
            throw ShrubberyCantOpenFile();
        else{
            file << tree;
            if (file.fail())
                throw ShrubberyCantWriteToFile();   }
        file.close();
        std::cout << "<" << target << "_shrubbery> tree created successfully.\n\n";
    }
    catch (const std::exception &e){
        std::cout << e.what() << std::endl;
    }
}

const char *ShrubberyCreationForm::ShrubberyCantOpenFile::what() const  throw(){
    return "ShrubberyCreationForm can't open file!";
}

const char *ShrubberyCreationForm::ShrubberyCantWriteToFile::what() const  throw(){
    return "ShrubberyCreationForm can't write to file!";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
