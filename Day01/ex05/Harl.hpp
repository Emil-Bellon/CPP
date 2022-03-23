/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebellon <ebellon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 15:24:37 by ebellon           #+#    #+#             */
/*   Updated: 2022/03/23 16:54:09 by ebellon          ###   ########lyon.fr   */
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
		
		struct __MatchLvlComp
		{
			std::string	_level;
			
			void		(Harl::*_complainDisplay_)(void) const;
		};
		
		static const __MatchLvlComp	__CompTab[4];

		void		debug_(void) const;
		void		info_(void) const;
		void		warning_(void) const;
		void		error_(void) const;
};

#endif