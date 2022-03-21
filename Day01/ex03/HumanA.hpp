/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebellon <ebellon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:48:17 by ebellon           #+#    #+#             */
/*   Updated: 2022/03/21 18:07:48 by ebellon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA
{
	public:
	
		HumanA(std::string name, Weapon& selfWeapon);
		~HumanA(void);

		void	attack(void) const;
	
	private:

		std::string	_name;
		Weapon&		_weapon;
};

#endif