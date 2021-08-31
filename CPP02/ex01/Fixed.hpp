#ifndef FIXED_CPP
# define FIXED_CPP

# include <iostream>
# include <tgmath.h>

class Fixed
{
private:
    int                 _fix;
    static const int    _fract;

public:
    Fixed();                            // A default constructor;
    Fixed(int i);                       // Integer constructor;
    Fixed(float f);                     // Floating point constructor;
    Fixed(Fixed const &f);              // A copy constructor;
    Fixed & operator=(Fixed const &f);  // An assignayion operator;
    ~Fixed();                           // A destructor;
    int getRawBits( void ) const;       
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;
};

std::ostream& operator<<(std::ostream &out, const Fixed &f);    // << operator;

#endif