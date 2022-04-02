#include "dog.hpp"

/* Constructors */

Dog::Dog(void) : AAnimal()
{
	std::cout << "Dog Default constructor called" << std::endl;
	this->type = "Dog";
	this->_brain = new Brain();
	return;
}

Dog::Dog(Dog const & src) : AAnimal(src)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	*this = src;
	return;
}

/* Overload operators */

Dog &		Dog::operator=(Dog const & rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
		this->_brain = rhs._brain;
	}
	return *this;
}

/* Destructor */

Dog::~Dog(void)
{
	std::cout << "Dog Destructor called" << std::endl;
	delete this->_brain;
	return;
}

/* Methods */

void	Dog::makeSound(void) const
{
	std::cout << "*Wouf*" << std::endl;
	return;
}
