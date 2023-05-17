#include "Fixed.hpp"

int main( void ) {
	Fixed def_fix;
	Fixed const int_fix( 10 );
	Fixed const flo_fix( 42.42f );
	Fixed const copy_fix( int_fix );

	def_fix = Fixed( 1234.4321f );
	std::cout << "\n";
	std::cout << "a is " << def_fix << std::endl;
	std::cout << "b is " << int_fix << std::endl;
	std::cout << "c is " << flo_fix << std::endl;
	std::cout << "d is " << copy_fix << std::endl;
	std::cout << "\n";
	std::cout << "a is " << def_fix.toInt() << " as integer" << std::endl;
	std::cout << "b is " << int_fix.toInt() << " as integer" << std::endl;
	std::cout << "c is " << flo_fix.toInt() << " as integer" << std::endl;
	std::cout << "d is " << copy_fix.toInt() << " as integer" << std::endl;
	std::cout << "\n";
	std::cout << "a is " << def_fix.toFloat() << " as float" << std::endl;
	std::cout << "b is " << int_fix.toFloat() << " as float" << std::endl;
	std::cout << "c is " << flo_fix.toFloat() << " as float" << std::endl;
	std::cout << "d is " << copy_fix.toFloat() << " as float" << std::endl;
	std::cout << "\n";
	return 0;
}