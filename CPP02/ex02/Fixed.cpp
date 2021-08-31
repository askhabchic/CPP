#include "Fixed.hpp"

const int    Fixed::_fract = 8;

/* Constractors */ 

Fixed::Fixed()  {
    _fix = 0;   }

Fixed::Fixed(int i){
    _fix = i << _fract;     }

Fixed::Fixed(float f){
    _fix = static_cast<int>(roundf(f * (1 << _fract)));   }

Fixed::Fixed(Fixed const &f){
    *this = f;  }

Fixed::~Fixed() {}

/* Setter, getter, casting operators*/

int Fixed::getRawBits( void ) const {
    return this->_fix;      }

void Fixed::setRawBits( int const raw ){
    _fix = raw;     }

float   Fixed::toFloat( void ) const{
    return static_cast<float>(_fix) / static_cast<float>(1 << _fract);      }

int     Fixed::toInt( void ) const{
    return static_cast<int>(_fix) / static_cast<float>(1 << _fract);      }

/* Increment & decrement operators */

Fixed& Fixed::operator++()    {
    this->_fix++;
    return *this;   }

Fixed Fixed::operator++(int)    {
    Fixed tmp(*this);
    operator++();
    return tmp;     }

Fixed& Fixed::operator--()    {
    this->_fix--;
    return *this;   }

Fixed Fixed::operator--(int)    {
    Fixed tmp(*this);
    operator--();
    return tmp;     }

/* = overloading */

Fixed& Fixed::operator=(Fixed const &f){
    if (this == &f)
        return *this;
    this->_fix = f.getRawBits();
    return *this;   }

/* Plus. minus, Multiplication, Division operators */

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

/* Comparison operators */

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

/* Min & max functions*/

const Fixed &Fixed::max(Fixed const &f1, Fixed const &f2){
    if (f1.getRawBits() < f2.getRawBits())
        return f2;
    return f1;     }

const Fixed &Fixed::min(Fixed const &f1, Fixed const &f2){
    if (f1.getRawBits() > f2.getRawBits())
        return f2;
    return f1;      }

Fixed &Fixed::max(Fixed &f1, Fixed &f2){
    if (f1.getRawBits() < f2.getRawBits())
        return f2;
    return f1;     }

Fixed &Fixed::min(Fixed &f1, Fixed &f2){
    if (f1.getRawBits() > f2.getRawBits())
        return f2;
    return f1;      }

/* << overloading */

std::ostream& operator<<(std::ostream &out, const Fixed &f){
    out << f.toFloat() ;
    return out;     }