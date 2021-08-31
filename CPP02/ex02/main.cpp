#include "Fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;

    std::cout << "\n\n| Operators: --a, a-- |\n\n";

    std::cout << "  a = " << a << std::endl;
    std::cout << "--a = " << --a << std::endl;
    std::cout << "  a = " << a << std::endl;
    std::cout << "a-- = " << a-- << std::endl;
    std::cout << "  a = " << a << std::endl;
    std::cout << "  b = " << b << std::endl;
    std::cout << "\n| Operators: >, <, <=, >=, ==, != |\n\n";
    std::cout << "  a = " << a << ", b = " << b << std::endl;
    std::cout << "\n (a < b) = " << (a < b) << std::endl;
    std::cout << " (a > b) = " << (a > b) << std::endl;
    std::cout << "(a <= b) = " << (a <= b) << std::endl;
    std::cout << "(a >= b) = " << (a >= b) << std::endl;
    std::cout << "(a == b) = " << (a == b) << std::endl;
    std::cout << "(a != b) = " << (a != b) << std::endl;
    std::cout << "\n| Operators: +, -, /, min() |\n\n";
    Fixed const c( Fixed( 5.05f ) + Fixed( 2 ) );
    std::cout << "c( 5.05f + 2 ) = " << c << std::endl;
    Fixed const e( Fixed( 5.05f ) - Fixed( 2 ) );
    std::cout << "e( 5.05f - 2 ) = " << e << std::endl;
    Fixed const d( Fixed( 5.05f ) / Fixed( 2 ) );
    std::cout << "d( 5.05f / 2 ) = " << d << std::endl;
    std::cout << " min ( a , b ) = " << Fixed::min( a, b ) << std::endl;
    return 0;
}
