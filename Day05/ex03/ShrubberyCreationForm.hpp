#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <fstream>
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	public:

		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const & src);

		~ShrubberyCreationForm(void);

		ShrubberyCreationForm &		operator=(ShrubberyCreationForm const & rhs);
		
		void		launch(void) const;

	private:
	
		ShrubberyCreationForm(void);
};

#endif