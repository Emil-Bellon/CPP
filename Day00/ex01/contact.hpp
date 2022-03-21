/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 15:29:23 by marvin            #+#    #+#             */
/*   Updated: 2022/03/20 15:29:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <cstdlib>
# include <iostream>
# include <iomanip>

class contact
{
	public :

		contact(void);
		~contact(void);

		void	set_contact_info(std::string _firstName, std::string _lastName,
			std::string _nickname, std::string _phoneNumber, std::string _darkestSecret);
		void	print_contact(void) const;
		void	print_contact_preview(void) const;

	private:

		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
};

#endif