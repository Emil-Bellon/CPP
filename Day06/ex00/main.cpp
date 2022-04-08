/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebellon <ebellon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:17:42 by ebellon           #+#    #+#             */
/*   Updated: 2022/04/08 18:40:53 by ebellon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

int main(int ac, char **av)
{
	if (ac != 2)
		std::cerr << "Usage: ./convert <litteral_to_cast>" << std::endl;
	else
	{
		std::string input = av[1];
		long double  nb;
		
		if (input.length() == 1 && !isdigit(static_cast<int>(input[0])))
			nb = static_cast<long double>(input[0]);
		else
			nb = atof(input.c_str());

		/* Print char */

		if ((atoi(input.c_str()) == 0 && input.length() > 1 ) || nb > std::numeric_limits<char>::max()
			|| nb < std::numeric_limits<char>::min())
			std::cout << "char: impossible" << std::endl;
		else if (nb < 32 || nb > 126)
			std::cout << "char: non displayable" << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(nb) << "'" << std::endl;

		/* Print int */

		if (nb != nb || nb < std::numeric_limits<int>::min() || nb > std::numeric_limits<int>::max())
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << static_cast<int>(nb) << std::endl;

		/* Print float */

		if (nb < 0 && nb < std::numeric_limits<float>::min())
			std::cout << "float: -inff" << std::endl;
		else if (nb > std::numeric_limits<float>::max())
			std::cout << "float: inff" << std::endl;
		else if (fmod(nb, 1) == 0)
				std::cout << "float: " << static_cast<float>(nb) << ".0f" << std::endl;
		else
				std::cout << "float: " << static_cast<float>(nb) << "f" << std::endl;

		/* Print double */

		if (nb < 0 && nb < std::numeric_limits<double>::min())
			std::cout << "float: -inf" << std::endl;
		else if (nb > std::numeric_limits<double>::max())
			std::cout << "float: inf" << std::endl;
		if (fmod(nb, 1) == 0)
			std::cout << "double: " << static_cast<double>(nb) << ".0" << std::endl;
		else
			std::cout << "double: " << static_cast<double>(nb) << std::endl;
	}
	
	return (0);
}