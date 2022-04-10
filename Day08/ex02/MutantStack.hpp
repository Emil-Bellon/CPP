/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 15:36:52 by marvin            #+#    #+#             */
/*   Updated: 2022/04/10 15:36:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() 													{};
		MutantStack(const MutantStack<T>& src) : std::stack<T>( src )	{*this = src;};

		MutantStack<T>& operator=(const MutantStack<T>& rhs) 
		{
			this->c = rhs.c;
			return *this;
		}

		~MutantStack()													{};

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin()	{return this->c.begin();};
		iterator end()		{return this->c.end();};
};