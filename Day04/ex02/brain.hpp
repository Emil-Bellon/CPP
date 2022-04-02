#ifndef BRAIN_HPP
# define BARIN_HPP

# include <iostream>

class	Brain
{
	public :

		Brain(void);
		Brain(Brain const & src);

		~Brain(void);

		Brain &	operator=(Brain const & rhs);
	
	private :

		std::string	_ideas[100];
};

#endif