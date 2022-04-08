#include <iostream>
#include "Bureaucrat.hpp"

int		main(void)
{
	try
	{
		Bureaucrat bob("Bob", 149);
		std::cout << bob << std::endl;
		bob.demote();
		std::cout << bob << std::endl;
		bob.demote();
		std::cout << bob << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Bureaucrat henry("Henry", 152);
		std::cout << henry << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Bureaucrat dylan("Dylan", 2);
		std::cout << dylan << std::endl;
		dylan.promote();
		std::cout << dylan << std::endl;
		dylan.promote();
		std::cout << dylan << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Bureaucrat marie("marie", 0);
		std::cout << marie << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return (0);
}