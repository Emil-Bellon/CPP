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
	return;
}

Fixed::Fixed(int const srcInt)
{
	this->_rawBits = (srcInt << this->__nFracBits__);

	return;
}

Fixed::Fixed(float const srcFloat)
{
	this->_rawBits = roundf(srcFloat * (1 << this->__nFracBits__));

	return;
}

Fixed::Fixed(Fixed const & src)
{
	*this = src;

	return;
}

/* Overload operators */

Fixed &		Fixed::operator=(Fixed const & rhs)
{
	if (this != &rhs)
		this->_rawBits = rhs._rawBits;

	return *this;
}

std::ostream &	operator<<(std::ostream & o, Fixed const & i)
{
	o << i.toFloat();

	return o;
}

bool	Fixed::operator>(Fixed const & rhs) const
{
	return (this->_rawBits > rhs._rawBits);
}

bool	Fixed::operator<(Fixed const & rhs) const
{
	return (this->_rawBits < rhs._rawBits);
}

bool	Fixed::operator>=(Fixed const & rhs) const
{
	return (this->_rawBits >= rhs._rawBits);
}

bool	Fixed::operator<=(Fixed const & rhs) const
{
	return (this->_rawBits <= rhs._rawBits);
}

bool	Fixed::operator==(Fixed const & rhs) const
{
	return (this->getRawBits() == rhs.getRawBits());
}

bool	Fixed::operator!=(Fixed const & rhs) const
{
	return (this->getRawBits() != rhs.getRawBits());
}

Fixed	Fixed::operator+(Fixed const & rhs) const
{
	Fixed	res;

	res._rawBits = this->_rawBits + rhs._rawBits; 
	return res;
}

Fixed	Fixed::operator-(Fixed const & rhs) const
{
	Fixed	res;

	res._rawBits = this->_rawBits - rhs._rawBits; 
	return res;
}

Fixed	Fixed::operator*(Fixed const & rhs) const
{
	Fixed	res;

	res._rawBits = this->_rawBits * rhs._rawBits >> __nFracBits__; 
	return res;
}

Fixed	Fixed::operator/(Fixed const & rhs) const
{
	Fixed	res;

	res._rawBits = this->_rawBits * (1 << __nFracBits__) / rhs._rawBits; 
	return res;
}

Fixed &	Fixed::operator++(void)
{
	this->_rawBits += 1;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);

	this->_rawBits += 1;
	return tmp;
}

Fixed &	Fixed::operator--(void)
{
	this->_rawBits -= 1;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);

	this->_rawBits -= 1;
	return tmp;
}

/* Destructor */

Fixed::~Fixed(void)
{
	return;
}

/* Setters */

void	Fixed::setRawBits(int const raw)
{
	this->_rawBits = raw;

	return;
}

/* Getters */

int		Fixed::getRawBits(void) const
{
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

/* Non Member function */

Fixed &			Fixed::min( Fixed & lhs, Fixed &rhs )
{
	if (rhs < lhs)
		return rhs;
	else
		return lhs;
}

Fixed const &	Fixed::min( Fixed const & lhs, Fixed const &rhs )
{
	if (rhs < lhs)
		return rhs;
	else
		return lhs;
}

Fixed &			Fixed::max( Fixed & lhs, Fixed &rhs )
{
	if (rhs > lhs)
		return rhs;
	else
		return lhs;
}

Fixed const &	Fixed::max( Fixed const & lhs, Fixed const &rhs )
{
	if (rhs > lhs)
		return rhs;
	else
		return lhs;
}
