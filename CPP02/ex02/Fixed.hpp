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
    Fixed();
    Fixed(int i);
    Fixed(float f);
    Fixed(Fixed const &f);
    ~Fixed();
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;

    // static & Fixed min();
    // static & Fixed max(Fixed a, Fixed b);
    Fixed& operator++();
    Fixed& operator--();
    Fixed operator++(int);
    Fixed operator--(int);

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