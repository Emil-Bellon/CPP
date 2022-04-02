#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "brain.hpp"

class	Animal
{
	public :

		Animal(void);
		Animal(Animal const & src);

		virtual ~Animal(void);

		Animal & operator=(Animal const & rhs);
		
		std::string const	getType(void) const;

		virtual void		makeSound(void) const;

	protected :

		std::string	type;
};

#endif