#ifndef FIXED_HPP
# define FIXED_HPP

# include <cmath>
# include <ostream>
# include <iostream>

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
    ~Fixed();                           // A destructor;
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;

    static Fixed &max(Fixed &f1, Fixed &f2);
    static Fixed &min(Fixed &f1, Fixed &f2);
    const static Fixed &max(Fixed const &f1, Fixed const &f2);
    const static Fixed &min(Fixed const &f1, Fixed const &f2);
    Fixed& operator++();            //prefix increment
    Fixed& operator--();            //prefix decrement
    Fixed operator++(int);          //postfix increment
    Fixed operator--(int);          //postfix decrement

    Fixed& operator=(Fixed const &f);
    Fixed operator+(Fixed const &f);
    Fixed operator-(Fixed const &f);
    Fixed operator*(Fixed const &f);
    Fixed operator/(Fixed const &f);
};

bool operator>(const Fixed &f1, const Fixed &f2);
bool operator<(const Fixed &f1, const Fixed &f2);
bool operator>=(const Fixed &f1, const Fixed &f2);
bool operator<=(const Fixed &f1, const Fixed &f2);
bool operator==(const Fixed &f1, const Fixed &f2);
bool operator!=(const Fixed &f1, const Fixed &f2);

std::ostream& operator<<(std::ostream &out, const Fixed &f);

#endif