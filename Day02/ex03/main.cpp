/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:58:26 by marvin            #+#    #+#             */
/*   Updated: 2022/03/24 15:58:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int main(void)
{
	Point	a(2, 0);
	Point	b(5, 0);
	Point	c(6, 3);
	Point	p(4, 0.1);

	if (bsp(a, b, c, p))
		std::cout << "The point belongs to the triangle" << std::endl;
	else
		std::cout << "The point doesn't belongs to the triangle" << std::endl;
	return (0);
}