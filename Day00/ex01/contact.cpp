/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 15:46:56 by marvin            #+#    #+#             */
/*   Updated: 2022/03/20 15:46:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

contact::contact(void)
{
	return;
}

contact::~contact(void)
{
	return;
}

void	contact::set_contact_info(std::string firstName, std::string lastName,
	std::string nickname, std::string phoneNumber, std::string darkestSecret)
{
	this->_firstName = firstName;
	this->_lastName = lastName;
	this->_nickname = nickname;
	this->_phoneNumber = phoneNumber;
	this->_darkestSecret = darkestSecret;
	return;
}

void	contact::print_contact(void) const
{
	std::cout << std::endl << "	First name : " + this->_firstName << std::endl;
	std::cout << "	Last name : " + this->_lastName << std::endl;
	std::cout << "	Nickname : " + this->_nickname << std::endl;
	std::cout << "	Phone number : " + this->_phoneNumber << std::endl;
	std::cout << "	Darkest secret : " + this->_darkestSecret << std::endl << std::endl;
	return;
}

void	contact::print_contact_preview(void) const
{
	if (this->_firstName.size() > 10)
		std::cout << this->_firstName.substr(0, 9) + "." << "|";
	else
		std::cout << std::setw(10) << this->_firstName << "|";
	if (this->_lastName.size() > 10)
		std::cout << this->_lastName.substr(0, 9) + "." << "|";
	else
		std::cout << std::setw(10) << this->_lastName << "|";
	if (this->_nickname.size() > 10)
		std::cout << this->_nickname.substr(0, 9) + "." << "|";
	else
		std::cout << std::setw(10) << this->_nickname << "|";
	return;
}