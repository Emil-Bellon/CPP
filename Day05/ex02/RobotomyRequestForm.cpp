#include <cstdlib>
#include "RobotomyRequestForm.hpp"

/* Constructors */

RobotomyRequestForm::RobotomyRequestForm(void) : AForm()
{
	return;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
			: AForm("RobotomyRequestForm", target, 72, 45)
{
	return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & rhs) : AForm(rhs)
{
	return;
}

/* Destructor */

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return;
}

/* Overload */

RobotomyRequestForm &	RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	*this = rhs;
	return *this;
}

/* Member function */

void	RobotomyRequestForm::launch(void) const
{
	srand(time(NULL));
	std::cout << "*drilling noises*" << std::endl;
	if (rand() % 2 == 0)
		std::cout << this->getTarget() << " as successfully been robotomized !" << std::endl;
	else
		std::cout << this->getTarget() << " robotomy failed ... (you may need to call the cleaning staff)." << std::endl;
	return;
}