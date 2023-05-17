#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	private:
		int _int;
		static const int _bits;
	public:
		Fixed();
		~Fixed();
		Fixed(const int fix);
		Fixed(const float fix);
		Fixed(const Fixed& fixed);
		Fixed& operator=(const Fixed &fixed);
		int getRawBits( void ) const;
		void setRawBits ( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
		bool operator==(const Fixed& other) const;
		bool operator<(const Fixed& other) const;
		bool operator>(const Fixed& other) const;
		bool operator>=(const Fixed& other) const;
		bool operator<=(const Fixed& other) const;
		bool operator!=(const Fixed& other) const;
		Fixed operator+(const Fixed& other) const;
		Fixed operator-(const Fixed& other) const;
		Fixed operator/(const Fixed& other) const;
		Fixed operator*(const Fixed& other) const;
		Fixed operator++(void);
		Fixed operator++(int);
		Fixed operator--(void);
		Fixed operator--(int);
		static const Fixed	&max(Fixed const &ref1, Fixed const &ref2);
		static const Fixed	&min(Fixed const &ref1, Fixed const &ref2);
};

std::ostream& operator<<(std::ostream& os, const Fixed& pf);

#endif