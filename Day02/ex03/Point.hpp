/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebellon <ebellon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 15:13:51 by ebellon           #+#    #+#             */
/*   Updated: 2022/03/25 17:07:35 by ebellon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include <cmath>
# include "Fixed.hpp"

class Point
{
	public:
	
		Point(void);
		Point(float const x, float const y);
		Point(Point const & src);
		~Point(void);

		Point &	operator=(Point const & rhs);

		void	setFixX(Fixed const x);
		void	setFloatX(float const x);
		void	setFixY(Fixed const y);
		void	setFloatY(float const y);

		Fixed	getX(void) const;
		Fixed	getY(void) const;
	
	private:

		Fixed	_x;
		Fixed	_y;
};

std::ostream &	operator<<(std::ostream & o, Point const & i);

#endif