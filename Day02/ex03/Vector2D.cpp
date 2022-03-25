/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector2D.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebellon <ebellon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 15:41:51 by ebellon           #+#    #+#             */
/*   Updated: 2022/03/25 17:19:20 by ebellon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Vector2D.hpp"

/* Constructors */

Vector2D::Vector2D(void) : _x(0), _y(0)
{
	return;
}

Vector2D::Vector2D(float const x, float const y) : _x(Fixed(x)), _y(Fixed(y))
{
	return;
}

Vector2D::Vector2D(Point const & x, Point const & y) : _x(y.getX() - x.getX()), _y(y.getY() - x.getY())
{
	return;
}

Vector2D::Vector2D(Vector2D const & src)
{
	*this = src;
	return; 
}

/* Destructor */

Vector2D::~Vector2D(void)
{
	return;
}

/* Overload operators */

Vector2D &		Vector2D::operator=(Vector2D const & rhs)
{
	if (this != &rhs)
	{
		this->_x = rhs._x;
		this->_y = rhs._y;
	}
	return *this;
}

Fixed			Vector2D::operator^(Vector2D const & rhs)
{
	return (this->_x * rhs._y - this->_y * rhs._x);
}

std::ostream &	operator<<(std::ostream & o, Vector2D const & i)
{
	o << "(-> : x = " << i.getX() << "; y = " << i.getY() << ")" << std::endl;
	return o;
}

/* Setters */

void	Vector2D::setFixX(Fixed const x)
{
	this->_x = x;
	return;
}

void	Vector2D::setFloatX(float const x)
{
	this->_x = Fixed(x);
	return;
}

void	Vector2D::setFixY(Fixed const y)
{
	this->_y = y;
	return;
}

void	Vector2D::setFloatY(float const y)
{
	this->_y = Fixed(y);
	return;
}

/* Getters */

Fixed	Vector2D::getX(void) const
{
	return this->_x;
}

Fixed	Vector2D::getY(void) const
{
	return this->_y;
}