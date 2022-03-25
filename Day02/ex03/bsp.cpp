/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebellon <ebellon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 15:58:23 by ebellon           #+#    #+#             */
/*   Updated: 2022/03/25 17:22:33 by ebellon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include "Vector2D.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Vector2D	v_ab(a, b);
	Vector2D	v_ac(a, c);
	Vector2D	v_ap(a, point);
	Vector2D	v_ba(b, a);
	Vector2D	v_bc(b, c);
	Vector2D	v_bp(b, point);
	Vector2D	v_ca(c, a);
	Vector2D	v_cb(c, b);
	Vector2D	v_cp(c, point);

	return (((v_ab ^ v_ap) * (v_ap ^ v_ac) > 0)
			&& ((v_ba ^ v_bp) * (v_bp ^ v_bc) > 0)
			&& ((v_ca ^ v_cp) * (v_cp ^ v_cb) > 0));
}