#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <fstream>
# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	public:

		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const & src);

		~RobotomyRequestForm(void);

		RobotomyRequestForm &		operator=(RobotomyRequestForm const & rhs);
		
		void		launch(void) const;

	private:
	
		RobotomyRequestForm(void);
};

#endif