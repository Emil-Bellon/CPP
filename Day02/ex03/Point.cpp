/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebellon <ebellon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 15:18:40 by ebellon           #+#    #+#             */
/*   Updated: 2022/03/25 17:19:34 by ebellon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/* Constructors */

Point::Point(void) : _x(0), _y(0)
{
	return;
}

Point::Point(float const x, float const y) : _x(Fixed(x)), _y(Fixed(y))
{
	return;
}

Point::Point(Point const & src)
{
	*this = src;
	return;
}

/* Destructor */

Point::~Point(void)
{
	return;
}

/* Overload operators */

Point &		Point::operator=(Point const & rhs)
{
	if (this != &rhs)
	{
		this->_x = rhs._x;
		this->_y = rhs._y;
	}
	return *this;
}

std::ostream &	operator<<(std::ostream & o, Point const & i)
{
	o << "(x = " << i.getX() << "; y = " << i.getY() << ")" << std::endl;
	return o;
}

/* Setters */

void	Point::setFixX(Fixed const x)
{
	this->_x = x;
	return;
}

void	Point::setFloatX(float const x)
{
	this->_x = Fixed(x);
	return;
}

void	Point::setFixY(Fixed const y)
{
	this->_y = y;
	return;
}

void	Point::setFloatY(float const y)
{
	this->_y = Fixed(y);
	return;
}

/* Getters */

Fixed	Point::getX(void) const
{
	return this->_x;
}

Fixed	Point::getY(void) const
{
	return this->_y;
}