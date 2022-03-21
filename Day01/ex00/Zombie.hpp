/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebellon <ebellon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:42:11 by ebellon           #+#    #+#             */
/*   Updated: 2022/03/21 15:55:52 by ebellon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>

class	Zombie
{
	public :

		Zombie(std::string name);
		~Zombie(void);
		
		void	announce(void) const;

	private :
		
		std::string	_name;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif