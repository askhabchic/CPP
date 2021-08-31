#include "Fixed.hpp"

const int    Fixed::_fract = 8;

Fixed::Fixed(Fixed &f){
    std::cout << "Copy constructor called\n";
    *this = f;
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called\n";
    return this->_fix;      }

Fixed & Fixed::operator=(Fixed const &f){
    std::cout << "Assignation operator called\n";
    if (this == &f)
        return *this;
    this->_fix = f.getRawBits();
    return *this;
}

void Fixed::setRawBits( int const raw ){
        _fix = raw;
    }

Fixed::Fixed()    {
    _fix = 0;
    std::cout << "Default constructor called\n";    }

Fixed::~Fixed()   {
    std::cout << "Destructor called\n";     }
