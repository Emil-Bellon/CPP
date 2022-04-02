#include "wrongcat.hpp"

/* Constructors */

WrongCat::WrongCat(void) : WrongAnimal()
{
	std::cout << "WrongCat Default constructor called" << std::endl;
	this->type = "WrongCat";
	return;
}

WrongCat::WrongCat(WrongCat const & src) : WrongAnimal(src)
{
	std::cout << "WrongCat Copy constructor called" << std::endl;
	*this = src;
	return;
}

/* Overload operators */

WrongCat &		WrongCat::operator=(WrongCat const & rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

/* Destructor */

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat Destructor called" << std::endl;
	return;
}

/* Methods */

void	WrongCat::makeSound(void) const
{
	std::cout << "*Miaou*" << std::endl;
	return;
}
