/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebellon <ebellon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:52:31 by ebellon           #+#    #+#             */
/*   Updated: 2022/03/29 15:00:23 by ebellon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public :

		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & src);

		~ScavTrap(void);

		ScavTrap &	operator=(ScavTrap const & rhs);
		
		void	attack(const std::string & target);
		void	guardGate(void) const;

	private :

		ScavTrap(void);
};

#endif