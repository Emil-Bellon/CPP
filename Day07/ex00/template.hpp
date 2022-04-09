/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 23:01:03 by marvin            #+#    #+#             */
/*   Updated: 2022/04/09 23:01:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>

template<typename T>
void	swap(T & a, T & b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T	min(T const & a, T const & b)
{
	return ((a < b) ? a : b);
}

template<typename T>
T	max(T const & a, T const & b)
{
	return ((a > b) ? a : b);
}