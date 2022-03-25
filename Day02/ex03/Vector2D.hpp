/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector2D.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebellon <ebellon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 15:40:55 by ebellon           #+#    #+#             */
/*   Updated: 2022/03/25 17:07:24 by ebellon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef Vector2D_HPP
# define Vector2D_HPP

# include <iostream>
# include <cmath>
# include "Fixed.hpp"
# include "Point.hpp"

class Vector2D
{
	public:
	
		Vector2D(void);
		Vector2D(float const x, float const y);
		Vector2D(Point const & x, Point const & y);
		Vector2D(Vector2D const & src);
		~Vector2D(void);

		Vector2D &	operator=(Vector2D const & rhs);
		Fixed		operator^(Vector2D const & rhs);

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

std::ostream &	operator<<(std::ostream & o, Vector2D const & i);

#endif