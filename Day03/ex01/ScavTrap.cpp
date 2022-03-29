/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebellon <ebellon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:00:30 by ebellon           #+#    #+#             */
/*   Updated: 2022/03/29 15:22:58 by ebellon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* Constructors */

ScavTrap::ScavTrap(void)
{
	std::cout << "Default ScavTrap constructor call" << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_hitPoint = 100;
	this->_energiePoint = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap : " << this->_name << " created." << std::endl;
	return;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	*this = src;
	std::cout << "ScavTrap : copy constructor call." << std::endl;
	return;
}

/* Destructors */

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor ScavTrap call." << std::endl;
	return;
}

/* Overload */

ScavTrap &	ScavTrap::operator=(ScavTrap const & rhs)
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

void	ScavTrap::attack(const std::string & target)
{
	if (this->_hitPoint == 0 || this->_energiePoint == 0)
		return;
	std::cout << "ScavTrap : " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage !" << std::endl;
	this->_energiePoint--;
	std::cout << "Energie left : " << this->_energiePoint << std::endl;
	return;
}

void	ScavTrap::guardGate(void) const
{
	if (this->_hitPoint > 0)
		std::cout << "ScavTrap : " << this->_name << " has entered int gate keeper mode !" << std::endl;
}