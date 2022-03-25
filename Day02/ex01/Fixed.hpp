/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:58:32 by marvin            #+#    #+#             */
/*   Updated: 2022/03/24 15:58:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

# define NFRACBITS 8

class Fixed
{
	public:
	
		Fixed(void);
		Fixed(int const srcInt);
		Fixed(float const srcFloat);
		Fixed(Fixed const & src);
		~Fixed(void);

		Fixed &	operator=(Fixed const & rhs);

		void	setRawBits(int const raw);
		int		getRawBits(void) const;
	
		int		toInt(void) const;
		float	toFloat(void) const;

	private:

		static int const	__nFracBits__;
		
		int		_rawBits;
};

std::ostream &	operator<<(std::ostream & o, Fixed const & i);

#endif