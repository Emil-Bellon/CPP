/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 15:27:18 by marvin            #+#    #+#             */
/*   Updated: 2022/03/20 15:27:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main(void)
{
	phonebook	phoneBook;
	std::string	usr_input;

	std::getline(std::cin, usr_input);
	if (!std::cin.good())
		return 1;
	while (usr_input.compare("EXIT"))
	{
		if (!usr_input.compare("ADD"))
			phoneBook.add();
		else if (!usr_input.compare("SEARCH"))
			phoneBook.search();
		std::getline(std::cin, usr_input);
		if (!std::cin.good())
			return 1;
	}
	return (0);
}