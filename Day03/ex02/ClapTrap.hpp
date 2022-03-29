/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebellon <ebellon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 13:25:22 by ebellon           #+#    #+#             */
/*   Updated: 2022/03/29 15:16:56 by ebellon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	public:

		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & src);

		~ClapTrap();

		ClapTrap &	operator=(ClapTrap const & rhs);

		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		virtual void	attack(const std::string & target);

	protected:

		ClapTrap(void);	

		std::string		_name;
		unsigned int	_hitPoint;
		unsigned int	_energiePoint;
		unsigned int	_attackDamage;
};


#endif