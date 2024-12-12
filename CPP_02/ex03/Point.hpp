/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:47:49 by hel-band          #+#    #+#             */
/*   Updated: 2024/11/21 21:03:44 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
private:
    Fixed const _x;
    Fixed const _y;

public:
    Point();

    Point(float x, float y);

    Point(Point const &other);

    Point &operator=(Point const &other);

    ~Point();

    Fixed const &getX() const;
    Fixed const &getY() const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
