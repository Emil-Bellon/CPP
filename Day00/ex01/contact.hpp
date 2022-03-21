/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebellon <ebellon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:56:08 by ebellon           #+#    #+#             */
/*   Updated: 2022/03/21 13:56:08 by ebellon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>

class Contact
{
	public :

		Contact(void);
		~Contact(void);

		void	setContactInfo(std::string _firstName, std::string _lastName,
			std::string _nickname, std::string _phoneNumber, std::string _darkestSecret);
		void	printContact(void) const;
		void	printContactPreview(void) const;

	private:

		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
};

#endif