/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebellon <ebellon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 15:24:37 by ebellon           #+#    #+#             */
/*   Updated: 2022/03/23 18:11:25 by ebellon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class	Harl
{
	public :
	
		Harl(void);
		~Harl(void);
		void	complain(std::string level) const;

	private :
		
		std::string	_levels[4];

		void		debug_(void) const;
		void		info_(void) const;
		void		warning_(void) const;
		void		error_(void) const;
};

#endif