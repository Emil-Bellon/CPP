/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebellon <ebellon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 15:29:19 by ebellon           #+#    #+#             */
/*   Updated: 2022/03/23 18:18:41 by ebellon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	this->_levels[0] = "DEBUG";
	this->_levels[1] = "INFO";
	this->_levels[2] = "WARNING";
	this->_levels[3] = "ERROR";
	return;
}

Harl::~Harl(void)
{
	return;
}

void	Harl::debug_(void) const
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
	std::cout << "I really do!" << std::endl;
}

void	Harl::info_(void) const
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn’t put enough bacon in my burger!" << std::endl; 
	std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning_(void) const
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error_(void) const
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level) const
{
	int	i = 0;
	
	while (level.compare(this->_levels[i]) && i < 4)
		i++;

	switch (i)
	{
		case 0:
			this->debug_();
			this->info_();
			this->warning_();
			this->error_();
			break;

		case 1:
			this->info_();
			this->warning_();
			this->error_();
			break;

		case 2:
			this->warning_();
			this->error_();
			break;

		case 3:
			this->error_();
			break;

		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}

	return;
}