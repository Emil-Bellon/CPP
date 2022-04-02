#include "aanimal.hpp"

/* Constructors */

AAnimal::AAnimal(void)
{
	std::cout << "AAnimal Default constructor called" << std::endl;
	return;
}

AAnimal::AAnimal(AAnimal const & src)
{
	std::cout << "AAnimal Copy constructor called" << std::endl;
	*this = src;
	return;
}

/* Overload operators */

AAnimal &		AAnimal::operator=(AAnimal const & rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

/* Destructor */

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal Destructor called" << std::endl;
	return;
}

/* Getters */

std::string	const	AAnimal::getType(void) const
{
	return this->type;
}

/* Methods */

void	AAnimal::makeSound(void) const
{
	std::cout << "*aanimal sound*" << std::endl;
	return;
}
