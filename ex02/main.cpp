#include "Fixed.hpp"

int main( void ) {
	Fixed copy(49.574f);
	{
		Fixed a(4.42f), b(3), c(copy);
		std::cout << "We are gonna test > operator" << "\n";
		std::cout << "is " << a << " more than " << b << "? " << (a > b) << "\n";
	}
	{
		Fixed a(4.42f), b(3), c(copy);
		std::cout << "We are gonna test < operator" << "\n";
		std::cout << "is " << a << " less than " << b << "? " << (a < b) << "\n";
	}
	{
		Fixed a(4.42f), b(3), c(copy);
		std::cout << "We are gonna test >= operator" << "\n";
		std::cout << "is " << a << " >= than " << b << "? " << (a >= b) << "\n";
	}
	{
		Fixed a(4.42f), b(3), c(copy);
		std::cout << "We are gonna test <= operator" << "\n";
		std::cout << "is " << a << " <= than " << b << "? " << (a <= b) << "\n";
	}
	{
		Fixed a(4.42f), b(3), c(copy);
		std::cout << "We are gonna test == operator" << "\n";
		std::cout << "is " << a << " equal to " << b << "? " << (a == b) << "\n";
	}
	{
		Fixed a(4.42f), b(3), c(copy);
		std::cout << "We are gonna test != operator" << "\n";
		std::cout << "is " << a << " not equal to " << b << "? " << (a != b) << "\n";
	}
	std::cout << "////////////////////////////////////////////////" << "\n";
	{
		Fixed a(4.42f), b(3), c(copy);
		std::cout << "We are gonna test + operator" << "\n";
		std::cout << "What is " << a << " plus " << b << "? " << (a + b) << "\n";
	}
	{
		Fixed a(4.42f), b(3), c(copy);
		std::cout << "We are gonna test - operator" << "\n";
		std::cout << "What is " << a << " minus " << b << "? " << (a - b) << "\n";
	}
	{
		Fixed a(4.42f), b(3), c(copy);
		std::cout << "We are gonna test * operator" << "\n";
		std::cout << "What is " << a << " times " << b << "? " << (a * b) << "\n";
	}
	{
		Fixed a(4.42f), b(3), c(copy);
		std::cout << "We are gonna test / operator" << "\n";
		std::cout << "What is " << a << " divided by " << b << "? " << (a / b) << "\n";
	}
	std::cout << "////////////////////////////////////////////////" << "\n";
	{
		Fixed a(4.42f), b(3), c(copy);
		std::cout << "We are gonna test ++ operator" << "\n";
		std::cout << "What is " << a << " plus plus? " << (++a) << "\n";
	}
	{
		Fixed a(4.42f), b(3), c(copy);
		std::cout << "We are gonna test -- operator" << "\n";
		std::cout << "What is " << a << " minus minus? " << (--a) << "\n";
	}
	{
		Fixed a(4.42f), b(3), c(copy);
		std::cout << "We are gonna test ++ operator" << "\n";
		std::cout << "What is " << a << " plus plus? " << (a++) << "\n";
	}
	{
		Fixed a(4.42f), b(3), c(copy);
		std::cout << "We are gonna test -- operator" << "\n";
		std::cout << "What is " << a << " plus plus? " << (a--) << "\n";
	}
	std::cout << "////////////////////////////////////////////////" << "\n";
	Fixed c(copy);
	std::cout << "C (copy) = " << c << "\n";
	return 0;
}