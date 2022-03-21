/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebellon <ebellon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:55:54 by ebellon           #+#    #+#             */
/*   Updated: 2022/03/21 13:55:54 by ebellon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main(void)
{
	Phonebook	phonebook;
	std::string	usr_input;

	std::getline(std::cin, usr_input);
	if (!std::cin.good())
		return 1;
	while (usr_input.compare("EXIT"))
	{
		if (!usr_input.compare("ADD"))
			phonebook.add();
		else if (!usr_input.compare("SEARCH"))
			phonebook.search();
		std::getline(std::cin, usr_input);
		if (!std::cin.good())
			return 1;
	}
	return (0);
}