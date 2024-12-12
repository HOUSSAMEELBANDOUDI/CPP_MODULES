/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:16:11 by hel-band          #+#    #+#             */
/*   Updated: 2024/12/03 12:43:27 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
public:
    Fixed();                                 // Default constructor
    Fixed(const int value);                  // Int constructor
    Fixed(const float value);                // Float constructor
    Fixed(const Fixed &other);               // Copy constructor
    Fixed &operator=(const Fixed &other);    // Copy assignment operator
    ~Fixed();                                // Destructor

    float toFloat() const;                   // Convert to float
    int toInt() const;                       // Convert to int


private:
    int _fixedPointValue;                    // Fixed-point value
    static const int _fractionalBits = 8;    // Number of fractional bits
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);
#endif
