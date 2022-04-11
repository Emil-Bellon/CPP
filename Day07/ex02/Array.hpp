/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 23:45:23 by marvin            #+#    #+#             */
/*   Updated: 2022/04/09 23:45:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

template<typename T>
class Array
{
	public:
		Array():				_array(NULL), _len(0)		{};
		Array(unsigned int n):	_array(new T[n]()), _len(n)	{};
		Array(Array const &src)
		{
			if (this != &src)
			{
				const size_t s = src.size();
				if (s > 0)
				{
					this->_array = new T[s];
					for (size_t i = 0 ; i < s ; i++)
						this->_array[i] = src[i];
				}
				else
					this->_array = NULL;
				this->_len = s;
			}
		};

		~Array()											{delete [] _array;};

		Array	&operator=(Array const & rhs)
		{
			if (this->_array)
				delete [] this->_array;
			this->_len = rhs._len;
			this->_array = new T[rhs._len];
			for (unsigned int i = 0; i < this->_len; i++)
				this->_array[i] = rhs[i];
			return *this;
		};

		T	&operator[](unsigned int index) const
		{
			if (index < 0 || index >= this->_len || !this->_array)
				throw IndexOutOfBoundsException();
			return this->_array[index];
		};

		class IndexOutOfBoundsException : public std::exception
		{
			public:
				virtual const char	*what() const throw()	{ return "Index out of bounds."; };
		};

		unsigned int size() const	{return (_len);};

	private:
		T				*_array;
		unsigned int	_len;
};