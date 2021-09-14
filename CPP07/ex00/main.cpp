#include "whatever.hpp"

int main( void ) {
Awesome Aw(5);
Awesome Bw(7);
std::cout << "Aw = " << Aw.getInt() << ", Bw = " << Bw.getInt() << std::endl;
std::cout << "min( Aw._n, Bw._n ) = " << ::min( Aw.getInt(), Bw.getInt() ) << std::endl;
std::cout << "max( Aw._n, Bw._n ) = " << ::max( Aw.getInt(), Bw.getInt() ) << std::endl;

int a = 2;
int b = 3;
::swap( a, b );
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
std::string c = "chaine1";
std::string d = "chaine2";
::swap(c, d);
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
return 0;
}