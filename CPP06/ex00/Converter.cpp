#include "Converter.hpp"

Converter::Converter()    {}

Converter::~Converter()     {}

void    Converter::parseArg(std::string s){
    double d = toDouble(s);
    {
        if (isnan(d))
            ifNan();
        else if (isinf(d))
            ifInf(d);
        else {
            if ((!isdigit(s.c_str()[0]) && (s.c_str()[0] != '-' && s.c_str()[0] != '+')) ||\
                (s.length() == 1 && (s.c_str()[0] == '-' || s.c_str()[0] == '+'))) {
                charVal = s.c_str()[0];
                std::cout << "char: '" << charVal << "'\n";
                intVal = static_cast<int>(charVal);
                std::cout << "int: " << intVal << std::endl;
                floatVal = static_cast<float>(charVal);
                doubleVal = static_cast<float>(charVal);
            }
            else    {
                toChar(d);
                toInt(d, s);
                toFloat(d);
            }
            if (static_cast<double>(floatVal - intVal)) {
                std::cout << "float: " << floatVal << "f" << std::endl;
                std::cout << "double: " << doubleVal << std::endl;  }
            else    {
                std::cout << "float: " << floatVal << ".0f" << std::endl;
                std::cout << "double: " << doubleVal << ".0" << std::endl;  }
                }
    }
}

void    Converter::ifNan(void){
    std::cout << "char: impossible\n";
    std::cout << "int: impossible\n";
    std::cout << "float: nanf\n";
    std::cout << "double: nan\n";
}

void    Converter::ifInf(double d){
    std::cout << "char: impossible\n";
    std::cout << "int: impossible\n";
    if (d < 0)  {
        std::cout << "float: -inff\n";
        std::cout << "double: -inf\n";  }
    else    {
        std::cout << "float: inff\n";
        std::cout << "double: inf\n";  }
}

void    Converter::toChar(double d){
    charVal = static_cast<char>(d);
    int i = static_cast<int>(d);
    if (i < 33 || i > 126)
        std::cout << "char: Non displayable\n";
    else if (charVal > CHAR_MAX || charVal < CHAR_MIN)
        std::cout << "int: impossible\n";
    else
        std::cout << "char: '" << charVal << "'\n";
}

void    Converter::toInt(double d, std::string s){
    intVal = atoi(s.c_str());
    if (d > INT_MAX || d < INT_MIN)
        std::cout << "int: impossible\n";
    else
        std::cout << "int: " << (intVal = static_cast<int>(d)) << std::endl;
}

void    Converter::toFloat(double d){
    floatVal = static_cast<float>(d);
}

double    Converter::toDouble(std::string str){
    doubleVal = strtod(str.c_str(), 0);
    return doubleVal;
}