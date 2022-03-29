/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebellon <ebellon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:25:24 by ebellon           #+#    #+#             */
/*   Updated: 2022/03/29 15:26:24 by ebellon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public :

		FragTrap(std::string name);
		FragTrap(FragTrap const & src);

		~FragTrap(void);

		FragTrap &	operator=(FragTrap const & rhs);
		
		void	attack(const std::string & target);
		void	highFivesGuys(void) const;

	private :

		FragTrap(void);
};

#endif