/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebellon <ebellon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:35:27 by ebellon           #+#    #+#             */
/*   Updated: 2022/03/21 17:43:52 by ebellon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>

class	Weapon
{
	public :

		Weapon(std::string type);
		~Weapon(void);

		std::string const & getType(void) const;
		void				setType(std::string type);
	
	private :
	
		std::string	_type;
};

#endif