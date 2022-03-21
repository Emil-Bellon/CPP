/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebellon <ebellon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:42:11 by ebellon           #+#    #+#             */
/*   Updated: 2022/03/21 16:17:27 by ebellon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>

class	Zombie
{
	public :

		Zombie(void);
		~Zombie(void);
		
		void	announce(void) const;
		void	setName(std::string name);

	private :
		
		std::string	_name;
};

Zombie*	zombieHorde(int N, std::string name);

#endif