#include "Fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    // std::cout << a << std::endl;
    // std::cout << --a << std::endl;
    // std::cout << a << std::endl;
    // std::cout << a-- << std::endl;
    // std::cout << a << std::endl;
    std::cout << b << std::endl;
    // Fixed const d( Fixed( 5.0f ) / Fixed( 2 ) );
    // std::cout << d << std::endl;
    // Fixed const c( Fixed( 5.05f ) + Fixed( 2 ) );
    // std::cout << c << std::endl;
    // Fixed const f( Fixed( 5.05f ) - Fixed( 2 ) );
    // std::cout << f << std::endl;

    // std::cout << Fixed::max( a, b ) << std::endl;
    return 0;
}

// 0
// 0.00390625
// 0.00390625
// 0.00390625
// 0.0078125
// 10.1016
// 10.1016
