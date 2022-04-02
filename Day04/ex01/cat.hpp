#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "animal.hpp"

class	Cat : public Animal
{
	public :

		Cat(void);
		Cat(Cat const & src);

		virtual ~Cat(void);

		Cat & operator=(Cat const & rhs);

		virtual void	makeSound(void) const;
	
	private :

		Brain*	_brain;
};

#endif