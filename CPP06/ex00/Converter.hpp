#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <iostream>
# include <cstdlib> //double strtod( const char * string, char ** endptr );
# include <cmath>
# include <iomanip>
# include <ctype.h>
# include <string>
# include <cctype>

class Converter
{
private:
    char    charVal;
    int     intVal;
    float   floatVal;
    double  doubleVal;
public:
    Converter();
    Converter(Converter &copy);
    Converter & operator=(Converter &copy);
    ~Converter();
    void    parseArg(std::string str);
    void    toChar(double d);
    void    toInt(double d, std::string str);
    void    toFloat(double d);
    double  toDouble(std::string str);
    void    ifNan(void);
    void    ifInf(double d);
};


#endif