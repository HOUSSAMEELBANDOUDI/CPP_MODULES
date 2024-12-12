/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:49:06 by hel-band          #+#    #+#             */
/*   Updated: 2024/12/03 13:12:51 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(float x, float y) : _x(x), _y(y) {}

Point::Point(Point const &other) : _x(other._x), _y(other._y) {}

Point &Point::operator=(Point const &other) {
    if (this != &other) {
        std::cout << "No assignment for const members"<<std::endl;
    }
    return *this;
}

Point::~Point() {}

Fixed const &Point::getX() const { return _x; }
Fixed const &Point::getY() const { return _y; }
