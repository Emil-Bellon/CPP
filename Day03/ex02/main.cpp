/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebellon <ebellon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:05:52 by ebellon           #+#    #+#             */
/*   Updated: 2022/03/29 15:30:22 by ebellon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int		main(void)
{
	FragTrap	frag("FragBoy");

	std::cout << std::endl;

	frag.attack("BullyMong");
	frag.takeDamage(5);
	frag.beRepaired(2);
	frag.highFivesGuys();

	std::cout << std::endl;

	return (0);
}