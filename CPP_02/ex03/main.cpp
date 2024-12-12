/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:53:56 by hel-band          #+#    #+#             */
/*   Updated: 2024/12/03 13:11:00 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

int main() {
    Point a(0.0f, 0.0f);
    Point b(5.0f, 0.0f);
    Point c(0.0f, 5.0f);
    Point point(0.0f, 0.0f);

    if (bsp(a, b, c, point))
        std::cout << "The point is inside the triangle." << std::endl;
    else
        std::cout << "The point is outside the triangle." << std::endl;

    return 0;
}
