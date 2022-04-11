/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 23:20:24 by marvin            #+#    #+#             */
/*   Updated: 2022/04/09 23:20:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>

template<typename T>
void	iter(T * array, unsigned int size, void (&f)(T const & elem))
{
	for (unsigned int i = 0; i < size; i++)
		f(array[i]);
}

template<typename T>
void	iter(T * array, unsigned int size, void (*f)(T & elem))
{
	for (unsigned int i = 0; i < size; i++)
		f(array[i]);
}

template<typename T>
void	output(T & elem)
{
	std::cout << elem << std::endl;
}