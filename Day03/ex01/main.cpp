/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebellon <ebellon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:05:52 by ebellon           #+#    #+#             */
/*   Updated: 2022/03/29 15:31:14 by ebellon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int		main(void)
{
	ScavTrap	scav("ScavBoy");

	std::cout << std::endl;

	scav.attack("BullyMong");
	scav.takeDamage(5);
	scav.beRepaired(2);
	scav.guardGate();

	std::cout << std::endl;

	return (0);
}