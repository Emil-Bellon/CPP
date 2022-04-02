#include "dog.hpp"

/* Constructors */

Dog::Dog(void) : Animal()
{
	std::cout << "Dog Default constructor called" << std::endl;
	this->type = "Dog";
	return;
}

Dog::Dog(Dog const & src) : Animal(src)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	*this = src;
	return;
}

/* Overload operators */

Dog &		Dog::operator=(Dog const & rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

/* Destructor */

Dog::~Dog(void)
{
	std::cout << "Dog Destructor called" << std::endl;
	return;
}

/* Methods */

void	Dog::makeSound(void) const
{
	std::cout << "*Wouf*" << std::endl;
	return;
}
