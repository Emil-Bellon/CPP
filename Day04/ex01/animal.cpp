#include "animal.hpp"

/* Constructors */

Animal::Animal(void)
{
	std::cout << "Animal Default constructor called" << std::endl;
	return;
}

Animal::Animal(Animal const & src)
{
	std::cout << "Animal Copy constructor called" << std::endl;
	*this = src;
	return;
}

/* Overload operators */

Animal &		Animal::operator=(Animal const & rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

/* Destructor */

Animal::~Animal(void)
{
	std::cout << "Animal Destructor called" << std::endl;
	return;
}

/* Getters */

std::string	const	Animal::getType(void) const
{
	return this->type;
}

/* Methods */

void	Animal::makeSound(void) const
{
	std::cout << "*animal sound*" << std::endl;
	return;
}
