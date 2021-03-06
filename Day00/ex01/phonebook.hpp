/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 15:28:56 by marvin            #+#    #+#             */
/*   Updated: 2022/03/20 15:28:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <cstdlib>
# include <iostream>
# include <iomanip>
# include "Contact.hpp"

# define MAX_CONTACT 8

class Phonebook
{
	public :

		Phonebook(void);
		~Phonebook(void);

		void		add(void);
		void		search(void) const;

	private:

		Contact		_contacts[MAX_CONTACT];
		size_t		_nbContacts;
		size_t		_idContact;

		void		_printPhonebook(void) const;
};

#endif