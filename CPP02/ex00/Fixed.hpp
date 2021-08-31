#ifndef FIXED_CPP
# define FIXED_CPP

# include <iostream>

class Fixed
{
private:
    int                 _fix;
    static const int    _fract;

public:
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    Fixed();                                // A default constructor;
    Fixed(Fixed &f);                        // A copy constructor;
    Fixed & operator=(Fixed const &f);;     // An assignayion operator;
    ~Fixed();                               // A destructor;
};


#endif