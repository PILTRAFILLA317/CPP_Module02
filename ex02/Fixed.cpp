#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed(void){
	this->_int = 0;
}

Fixed::~Fixed(void){
}

Fixed::Fixed(const Fixed &fixed){
	*this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed){
	if (this != &fixed)
		this->_int = fixed.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const{
	return this->_int;
}

void Fixed::setRawBits(int const raw){
	this->_int = raw;
}

Fixed::Fixed(const int fix){
	this->_int = fix * pow(2, 8);
}

Fixed::Fixed(float fix){
	this->_int = round(fix * 256.0f);
}

float Fixed::toFloat(void) const{
	return (this->_int * pow(2, -this->_bits));
}

int Fixed::toInt(void) const{
	return (this->_int * pow(2, -this->_bits));
}

std::ostream &operator<<(std::ostream &os, const Fixed &pf){
	return (os << pf.toFloat());
}

bool Fixed::operator==(const Fixed &other) const{
	return this->toFloat() == other.toFloat();
}

bool Fixed::operator<=(const Fixed &other) const{
	return this->toFloat() <= other.toFloat();
}

bool Fixed::operator>=(const Fixed &other) const{
	return this->toFloat() >= other.toFloat();
}

bool Fixed::operator<(const Fixed &other) const{
	return this->toFloat() < other.toFloat();
}

bool Fixed::operator>(const Fixed &other) const{
	return this->toFloat() > other.toFloat();
}

Fixed Fixed::operator+(const Fixed &other) const{
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other) const{
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other) const{
	return Fixed(this->toFloat() / other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other) const{
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator++(void)
{
	this->_int++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed a(*this);
	operator++();
	return (a);
}

Fixed Fixed::operator--(void)
{
	this->_int--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed a(*this);
	operator--();
	return (a);
}

const Fixed	&Fixed::min(Fixed const &ref1, Fixed const &ref2)
{
	if (ref1 < ref2)
		return (ref1);
	return (ref2);
}

const Fixed	&Fixed::max(Fixed const &ref1, Fixed const &ref2)
{
	if (ref1 > ref2)
		return (ref1);
	return (ref2);
}
