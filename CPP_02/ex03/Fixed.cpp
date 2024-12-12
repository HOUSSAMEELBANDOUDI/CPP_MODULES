/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:51:32 by hel-band          #+#    #+#             */
/*   Updated: 2024/11/20 17:51:33 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0) {}

Fixed::Fixed(const int value) {
    _fixedPointValue = value << _fractionalBits;
}

Fixed::Fixed(const float value) {
    _fixedPointValue = roundf(value * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed& other) {
    *this = other;
}

Fixed::~Fixed() {}

Fixed& Fixed::operator=(const Fixed& other) {
    if (this != &other) {
        _fixedPointValue = other._fixedPointValue;
    }
    return *this;
}

// Comparison operators
bool Fixed::operator>(const Fixed& other) const { return _fixedPointValue > other._fixedPointValue; }
bool Fixed::operator<(const Fixed& other) const { return _fixedPointValue < other._fixedPointValue; }
bool Fixed::operator>=(const Fixed& other) const { return _fixedPointValue >= other._fixedPointValue; }
bool Fixed::operator<=(const Fixed& other) const { return _fixedPointValue <= other._fixedPointValue; }
bool Fixed::operator==(const Fixed& other) const { return _fixedPointValue == other._fixedPointValue; }
bool Fixed::operator!=(const Fixed& other) const { return _fixedPointValue != other._fixedPointValue; }

// Arithmetic operators
Fixed Fixed::operator+(const Fixed& other) const {
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) const {
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) const {
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) const {
    return Fixed(this->toFloat() / other.toFloat());
}

// Increment/Decrement operators
Fixed& Fixed::operator++() { // Pre-increment
    _fixedPointValue++;
    return *this;
}

Fixed Fixed::operator++(int) { // Post-increment
    Fixed temp = *this;
    _fixedPointValue++;
    return temp;
}

Fixed& Fixed::operator--() { // Pre-decrement
    _fixedPointValue--;
    return *this;
}

Fixed Fixed::operator--(int) { // Post-decrement
    Fixed temp = *this;
    _fixedPointValue--;
    return temp;
}

// Static min/max functions
Fixed& Fixed::min(Fixed& a, Fixed& b) {
    return (a < b) ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
    return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
    return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
    return (a > b) ? a : b;
}

int Fixed::getRawBits() const {
    return _fixedPointValue;
}

void Fixed::setRawBits(int const raw) {
    _fixedPointValue = raw;
}

float Fixed::toFloat() const {
    return static_cast<float>(_fixedPointValue) / (1 << _fractionalBits);
}

int Fixed::toInt() const {
    return _fixedPointValue >> _fractionalBits;
}

std::ostream& operator<<(std::ostream& out, const Fixed& value) {
    out << value.toFloat();
    return out;
}