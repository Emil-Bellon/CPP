/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:58:37 by marvin            #+#    #+#             */
/*   Updated: 2022/03/24 15:58:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const	Fixed::__nFracBits__ = NFRACBITS;

/* Constructors */

Fixed::Fixed(void) : _rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;

	return;
}

Fixed::Fixed(int const srcInt) : _rawBits(srcInt << this->__nFracBits__)
{
	std::cout << "Int constructor called" << std::endl;
	return;
}

Fixed::Fixed(float const srcFloat) : _rawBits(roundf(srcFloat * (1 << this->__nFracBits__)))
{
	std::cout << "Float constructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return;
}

/* Overload operators */

Fixed &		Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_rawBits = rhs._rawBits;

	return *this;
}

std::ostream &	operator<<(std::ostream & o, Fixed const & i)
{
	o << i.toFloat();

	return o;
}

/* Destructor */

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;

	return;
}

/* Setters */

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_rawBits = raw;

	return;
}

/* Getters */

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;

	return this->_rawBits;
}

/* Member functions */

int		Fixed::toInt(void) const
{
	return (this->_rawBits >> this->__nFracBits__);
}

float	Fixed::toFloat(void) const
{
	return((float)(this->_rawBits) / (1 << this->__nFracBits__));
}