#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <fstream>
# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:

		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const & src);

		~PresidentialPardonForm(void);

		PresidentialPardonForm &		operator=(PresidentialPardonForm const & rhs);
		
		void		launch(void) const;

	private:
	
		PresidentialPardonForm(void);
};

#endif