/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebellon <ebellon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 13:31:45 by ebellon           #+#    #+#             */
/*   Updated: 2022/03/29 15:18:29 by ebellon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* Constructors */

ClapTrap::ClapTrap(void) : _name("Default ClapTrap"), _hitPoint(10), _energiePoint(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << this->_name << " created." << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoint(10), _energiePoint(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << this->_name << " created." << std::endl;
	return;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	std::cout << "Coppy constructor Call" << std::endl;
	*this = src;
	return;
}

/* Destructors */

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor Call" << std::endl;
	return;
}

/* Overload */

ClapTrap &	ClapTrap::operator=(ClapTrap const & rhs)
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

void	ClapTrap::attack(const std::string & target)
{
	if (this->_hitPoint == 0 || this->_energiePoint == 0)
		return;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage !" << std::endl;
	this->_energiePoint--;
	std::cout << "Energie left : " << this->_energiePoint << std::endl;
	return;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoint == 0)
		return;
	if (amount > this->_hitPoint)
		this->_hitPoint = 0;
	else
		this->_hitPoint -= amount;
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " damage." << std::endl;
	std::cout << "HP left : " << this->_hitPoint << std::endl;
	return;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoint == 0 || this->_energiePoint == 0)
		return;
	this->_energiePoint--;
	this->_hitPoint += amount;
	std::cout << "ClapTrap " << this->_name << " heals himself for " << amount << " HP." << std::endl;
	std::cout << "Current HP : " << this->_hitPoint << std::endl;
	return;
}