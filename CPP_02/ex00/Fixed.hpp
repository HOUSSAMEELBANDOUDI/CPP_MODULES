/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:43:49 by hel-band          #+#    #+#             */
/*   Updated: 2024/11/05 12:13:12 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// Fixed.hpp

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
public:
    Fixed();                                // Default constructor
    Fixed(const Fixed& other);              // Copy constructor
    Fixed& operator=(const Fixed& other);   // Copy assignment operator
    ~Fixed();                               // Destructor

    int getRawBits(void) const;             // Getter for raw value
    void setRawBits(int const raw);         // Setter for raw value

private:
    int                 _fixedPointValue;   // Integer to store fixed-point value
    static const int    _fractionalBits = 8; // Number of fractional bits
};

#endif
