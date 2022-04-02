#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "aanimal.hpp"

class	Dog : public AAnimal
{
	public :

		Dog(void);
		Dog(Dog const & src);

		virtual ~Dog(void);

		virtual void	makeSound(void) const;

		Dog & operator=(Dog const & rhs);

	private :

		Brain*	_brain;
};

#endif