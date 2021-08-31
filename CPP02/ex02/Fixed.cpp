#include "Fixed.hpp"

const int    Fixed::_fract = 8;

Fixed::Fixed()  {
    // std::cout << "default constructor" << std::endl;
    _fix = 0;   }

Fixed::Fixed(int i){
    _fix = i << _fract;     }

Fixed::Fixed(float f){
    _fix = roundf(f * (1 << _fract));   }

Fixed::Fixed(Fixed const &f){
    *this = f;  }

Fixed::~Fixed() {}

int Fixed::getRawBits( void ) const {
    return this->_fix >> this->_fract;      }

void Fixed::setRawBits( int const raw ){
    _fix = raw;     }

float   Fixed::toFloat( void ) const{
    return static_cast<float>(_fix) / static_cast<float>(1 << _fract);      }

int     Fixed::toInt( void ) const{
    return static_cast<int>(_fix) / static_cast<float>(1 << _fract);      }

Fixed& Fixed::operator++()    {
    this->_fix++;
    return *this;   }

Fixed Fixed::operator++(int)    {
    Fixed tmp(*this);
    ++(*this);
    return tmp;     }

Fixed& Fixed::operator--()    {
    this->_fix--;
    return *this;   }

Fixed Fixed::operator--(int)    {
    Fixed tmp(*this);
    operator--();
    return *this;     }

Fixed& Fixed::operator=(Fixed const &f){
    if (this == &f)
        return *this;
    this->_fix = f.getRawBits();
    return *this;   }

Fixed Fixed::operator+(Fixed const &f) {
    this->setRawBits(this->_fix + f._fix);
    return *this;   }

Fixed Fixed::operator-(Fixed const &f) {
    this->setRawBits(this->_fix - f._fix);
    return *this;   }

Fixed Fixed::operator*(Fixed const &f) {
    Fixed ftmp;
    ftmp._fix = ((this->_fix * f._fix) >> this->_fract);
    return ftmp;   }

Fixed Fixed::operator/(Fixed const &f) {
    Fixed ftmp;
    ftmp._fix = ((this->_fix << this->_fract) / f._fix);
    return ftmp;   }


bool operator>(const Fixed &f1, const Fixed &f2){
    return f1.getRawBits() > f2.getRawBits();   }

bool operator<(const Fixed &f1, const Fixed &f2){
    return f1.getRawBits() < f2.getRawBits();   }

bool operator<=(const Fixed &f1, const Fixed &f2){
    return f1.getRawBits() <= f2.getRawBits();  }

bool operator>=(const Fixed &f1, const Fixed &f2){
    return f1.getRawBits() >= f2.getRawBits();  }

bool operator==(const Fixed &f1, const Fixed &f2){
    return f1.getRawBits() == f2.getRawBits();  }

bool operator!=(const Fixed &f1, const Fixed &f2){
    return f1.getRawBits() != f2.getRawBits();  }

std::ostream& operator<<(std::ostream &out, const Fixed &f){
    out << f.toFloat() ;
    return out;     }