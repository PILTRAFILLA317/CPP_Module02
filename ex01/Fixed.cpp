#include "Fixed.hpp"

Fixed::Fixed(void){
	std::cout << "Default constructor called" << "\n";
	this->_int = 0;
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << "\n";
}

Fixed::Fixed(const Fixed& fixed){
	std::cout << "Copy constructor called" << "\n";
	*this = fixed;
}

Fixed &Fixed::operator=(const Fixed& fixed){
	std::cout << "Assignation operator called" << "\n";
	if (this != &fixed)
		this->_int = fixed.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << "\n";
	return this->_int;
}

void Fixed::setRawBits( int const raw ){
	std::cout << "setRawBits member function called" << "\n";
	this->_int = raw;
}