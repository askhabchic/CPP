#include "Fixed.hpp"

const int    Fixed::_fract = 8;

int Fixed::getRawBits( void ) const {
    return this->_fix;      }

void Fixed::setRawBits( int const raw ){
    _fix = raw; }

float   Fixed::toFloat( void ) const{
    return static_cast<float>(_fix) / (1 << _fract);    }

int     Fixed::toInt( void ) const{
    return static_cast<int>(_fix) / (1 << _fract);      }

Fixed::Fixed()    {
    _fix = 0;
    std::cout << "Default constructor called\n";    }

Fixed::Fixed(int i){
    std::cout << "Int constructor called\n";
    _fix = i << _fract;
}

Fixed::Fixed(float f){
    std::cout << "Float constructor called\n";
    _fix = roundf(f * (1 << _fract));
}

Fixed::Fixed(Fixed const &f){
    std::cout << "Copy constructor called\n";
    *this = f;
}

Fixed & Fixed::operator=(Fixed const &f){
    std::cout << "Assignation operator called\n";
    if (this == &f)
        return *this;
    this->_fix = f.getRawBits();
    return *this;
}

std::ostream& operator<<(std::ostream &out, const Fixed &f){
    out << f.toFloat();
    return out;
}

Fixed::~Fixed()   {
    std::cout << "Destructor called\n";     }
