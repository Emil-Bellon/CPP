/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 23:29:51 by marvin            #+#    #+#             */
/*   Updated: 2022/04/09 23:29:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main()
{
	int			numbers[5] = { 420, 69, 666, 101, 42 };
	std::string	strings[3] = { "Coucou", "Maman", "Bobo" };

	std::cout << "Print numbers:" << std::endl;
	iter<int>(numbers, 5, &output);
	std::cout << std::endl;

	std::cout << "Print first 3 numbers:" << std::endl;
	iter<int>(numbers, 3, &output);
	std::cout << std::endl;
	
	std::cout << "Print strings:" << std::endl;
	iter<std::string>(strings, 3, &output);
	std::cout << std::endl;

	std::cout << "Print first string:" << std::endl;
	iter<std::string>(strings, 1, &output);
	
	return 0;
}