/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebellon <ebellon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:05:52 by ebellon           #+#    #+#             */
/*   Updated: 2022/03/29 14:09:14 by ebellon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int		main(void)
{
	ClapTrap boby("Boby");
	ClapTrap bobySon(boby);

	std::cout << std::endl;

	bobySon.takeDamage(1000);
	bobySon.beRepaired(10); // Do nothing because 0 HP left
	boby.attack("Great Bullymong");
	boby.attack("Great Bullymong");
	boby.attack("Great Bullymong");
	boby.attack("Great Bullymong");
	boby.attack("Great Bullymong");
	boby.takeDamage(5);
	boby.beRepaired(1);
	boby.beRepaired(1);
	boby.beRepaired(1);
	boby.beRepaired(1);
	boby.beRepaired(1);
	boby.attack("Great Bullymong"); // Do nothing because 0 EP left
	boby.attack("Great Bullymong");
	boby.takeDamage(1000);

	std::cout << std::endl;

	return (0);
}