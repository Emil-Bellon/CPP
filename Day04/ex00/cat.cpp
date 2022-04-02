#include "cat.hpp"

/* Constructors */

Cat::Cat(void) : Animal()
{
	std::cout << "Cat Default constructor called" << std::endl;
	this->type = "Cat";
	return;
}

Cat::Cat(Cat const & src) : Animal(src)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	*this = src;
	return;
}

/* Overload operators */

Cat &		Cat::operator=(Cat const & rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

/* Destructor */

Cat::~Cat(void)
{
	std::cout << "Cat Destructor called" << std::endl;
	return;
}

/* Methods */

void	Cat::makeSound(void) const
{
	std::cout << "*Miaou*" << std::endl;
	return;
}
