/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebellon <ebellon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:25:28 by ebellon           #+#    #+#             */
/*   Updated: 2022/03/29 15:30:36 by ebellon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* Constructors */

FragTrap::FragTrap(void)
{
	std::cout << "Default FragTrap constructor call" << std::endl;
	return;
}

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_hitPoint = 100;
	this->_energiePoint = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap : " << this->_name << " created." << std::endl;
	return;
}

FragTrap::FragTrap(FragTrap const & src)
{
	*this = src;
	std::cout << "FragTrap : copy constructor call." << std::endl;
	return;
}

/* Destructors */

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor FragTrap call." << std::endl;
	return;
}

/* Overload */

FragTrap &	FragTrap::operator=(FragTrap const & rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoint = rhs._hitPoint;
		this->_energiePoint = rhs._energiePoint;
		this->_attackDamage = rhs._attackDamage;
	}
	return *this;
}

/* Member functions */

void	FragTrap::attack(const std::string & target)
{
	if (this->_hitPoint == 0 || this->_energiePoint == 0)
		return;
	std::cout << "FragTrap : " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage !" << std::endl;
	this->_energiePoint--;
	std::cout << "Energie left : " << this->_energiePoint << std::endl;
	return;
}

void	FragTrap::highFivesGuys(void) const
{
	if (this->_hitPoint > 0)
		std::cout << "Would you like to HighFive someone ?" << std::endl;
	return;
}