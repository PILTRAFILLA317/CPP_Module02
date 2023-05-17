#include "Fixed.hpp"

const int	Fixed::_bits = 8;

Fixed::Fixed(void){
	std::cout << "Default constructor called" << "\n";
	this->_int = 0;
}

Fixed::~Fixed(void){
	std::cout << this->toFloat() << "\n";
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

Fixed::Fixed(const int fix){
	std::cout << "Int constructor called" << "\n";
	this->_int = fix * pow(2, 8);
}

Fixed::Fixed(const float fix){
	std::cout << "Float constructor called" << "\n";
	this->_int = round(fix * 256.0f);
}

float Fixed::toFloat( void ) const{
	return (this->_int * pow(2, -this->_bits));
}

int Fixed::toInt( void ) const{
	return (this->_int * pow(2, -this->_bits));
}

std::ostream& operator<<(std::ostream& os, const Fixed& pf){
			return (os << pf.toFloat());
}