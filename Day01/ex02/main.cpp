/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebellon <ebellon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:16:43 by ebellon           #+#    #+#             */
/*   Updated: 2022/03/25 17:49:38 by ebellon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string		string = "HI THIS IS BRAIN";
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;

	std::cout << "Memory address of string	: " << &string << std::endl;
	std::cout << "Memory address of stringPTR	: " << stringPTR << std::endl;
	std::cout << "Memory address of stringREF	: " << &stringREF << std::endl << std::endl;
	std::cout << "Value of string		: " << string << std::endl;
	std::cout << "Value of stringPTR	: " << *stringPTR << std::endl;
	std::cout << "Value of stringREF	: " << stringREF << std::endl;
	return (0);
}