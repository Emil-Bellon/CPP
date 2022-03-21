/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 16:14:00 by marvin            #+#    #+#             */
/*   Updated: 2022/03/20 16:14:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

phonebook::phonebook(void) : _nbContacts(0), _idContact(0)
{
    return;
}

phonebook::~phonebook(void)
{
    return;
}

std::string	get_valid_field(std::string fieldInputMessage)
{
	std::string	usr_input;

	if (!std::cin.good())
		return ("");
	std::cout << fieldInputMessage;
	std::getline(std::cin, usr_input);
	if (!std::cin.good())
		return ("");
	while (usr_input.empty())
	{
		std::cout << "Empty fields are not allowed." << std::endl << fieldInputMessage;
		std::getline(std::cin, usr_input);
		if (!std::cin.good())
			return ("");
	}
	return (usr_input);
}

void	phonebook::add(void)
{
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phoneNumber;
	std::string	darkestSecret;
	
	if (this->_idContact > MAX_CONTACT - 1)
		this->_idContact = 0;
	std::cout << std::endl;
	firstName = get_valid_field("Input contact's first name : ");
	lastName = get_valid_field("Input contact's last name : ");
	nickname = get_valid_field("Input contact's nickname : ");
	phoneNumber = get_valid_field("Input contact's phone number : ");
	darkestSecret = get_valid_field("Input contact's darkest secret : ");
	if (firstName.empty() || lastName.empty() || nickname.empty() || phoneNumber.empty() | darkestSecret.empty())
		return;
	std::cout << std::endl;
	this->_contacts[this->_idContact].set_contact_info(firstName, lastName, nickname, phoneNumber, darkestSecret);
	if (_nbContacts < MAX_CONTACT)
		this->_nbContacts += 1;
	this->_idContact += 1;
	return;
}

void	phonebook::_printPhonebook(void) const
{

	size_t	i = 0;

	std::cout << std::endl;
	while ( i < this->_nbContacts && i < MAX_CONTACT )
	{
		std::cout << "|──────────|──────────|──────────|──────────|" << std::endl;
		std::cout << "|" << std::setw(10) << i << "|";
		this->_contacts[i].print_contact_preview();
		std::cout << std::endl;
		i++;
	}
	std::cout << "|──────────|──────────|──────────|──────────|" << std::endl;
	std::cout << std::endl;
	return;
}

void	phonebook::search(void) const
{
	std::string	usr_input;

	if (this->_nbContacts == 0)
	{
		std::cout << "PhoneBook empty." << std::endl;
		return;
	}
	this->_printPhonebook();
	std::cout << "Input index contact needed : ";
	std::getline(std::cin, usr_input);
	if (!std::cin.good())
		return;
	while (usr_input.empty() || usr_input.size() != 1
		|| (size_t)(usr_input.at(0) - '0') < 0 || (size_t)(usr_input.at(0) - '0') > this->_nbContacts
		|| (size_t)(usr_input.at(0) - '0') > MAX_CONTACT - 1)
	{
		std::cout << "Please input an index that fit in the list printed." << std::endl << "Input index contact needed : ";
		std::getline(std::cin, usr_input);
		if (!std::cin.good())
			return;
	}
	this->_contacts[(size_t)(usr_input.at(0) - '0')].print_contact();
	return;
}