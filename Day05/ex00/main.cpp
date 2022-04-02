#include <iostream>
#include "Bureaucrat.hpp"

int		main(void)
{
	try {
		Bureaucrat gerard("Bob", 149);
		std::cout << gerard << std::endl;
		gerard.demote();
		std::cout << gerard << std::endl;
		gerard.demote();
		std::cout << gerard << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		Bureaucrat george("Henry", 152);
		std::cout << george << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		Bureaucrat andre("Dylan", 2);
		std::cout << andre << std::endl;
		andre.promote();
		std::cout << andre << std::endl;
		andre.promote();
		std::cout << andre << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		Bureaucrat marie("Quatre", 0);
		std::cout << marie << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}