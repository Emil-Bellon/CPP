#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "wronganimal.hpp"

class	WrongCat : public WrongAnimal
{
	public :

		WrongCat(void);
		WrongCat(WrongCat const & src);

		virtual ~WrongCat(void);

		WrongCat & operator=(WrongCat const & rhs);

		void	makeSound(void) const;
};

#endif