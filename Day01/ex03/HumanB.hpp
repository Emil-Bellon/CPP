/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebellon <ebellon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:57:23 by ebellon           #+#    #+#             */
/*   Updated: 2022/03/21 18:17:58 by ebellon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
	public:
	
		HumanB(std::string name);
		~HumanB(void);

		void	setWeapon(Weapon& selfWeapon);
		void	attack(void) const;
	
	private:

		std::string	_name;
		Weapon*		_weapon;
};

#endif