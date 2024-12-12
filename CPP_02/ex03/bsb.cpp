/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsb.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:53:01 by hel-band          #+#    #+#             */
/*   Updated: 2024/11/20 18:18:13 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

//cross product
Fixed crossProduct(Point const &a, Point const &b, Point const &c) {
    return (a.getX() - c.getX()) * (b.getY() - c.getY()) - (a.getY() - c.getY()) * (b.getX() - c.getX());
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
    Fixed cross1 = crossProduct(a, b, point);
    Fixed cross2 = crossProduct(b, c, point);
    Fixed cross3 = crossProduct(c, a, point);

    return (cross1 > 0 && cross2 > 0 && cross3 > 0) || (cross1 < 0 && cross2 < 0 && cross3 < 0);
}
