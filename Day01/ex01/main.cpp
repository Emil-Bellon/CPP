/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebellon <ebellon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:35:28 by ebellon           #+#    #+#             */
/*   Updated: 2022/03/21 16:25:03 by ebellon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie*	horde = zombieHorde(10, "Bryan");
	
	for (int i = 0; i < 10; i++)
		horde[i].announce();
	delete [] horde;
    return (0);
}