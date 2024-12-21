/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 19:08:44 by hel-band          #+#    #+#             */
/*   Updated: 2024/12/20 19:13:29 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <limits>

// Constructor
Span::Span(unsigned int n) : _maxSize(n) {}

// Destructor
Span::~Span() {}

// Copy constructor
Span::Span(const Span& other) : _maxSize(other._maxSize), _numbers(other._numbers) {}

// Assignment operator
Span& Span::operator=(const Span& other) {
    if (this != &other) {
        _maxSize = other._maxSize;
        _numbers = other._numbers;
    }
    return *this;
}

// Add a single number
void Span::addNumber(int number) {
    if (_numbers.size() >= _maxSize) {
        throw StorageFullException();
    }
    _numbers.push_back(number);
}

// Shortest span
int Span::shortestSpan() const {
    if (_numbers.size() < 2) {
        throw NoSpanException();
    }
    std::vector<int> sorted = _numbers;
    std::sort(sorted.begin(), sorted.end());
    int shortest = std::numeric_limits<int>::max();
    for (size_t i = 1; i < sorted.size(); ++i) {
        shortest = std::min(shortest, sorted[i] - sorted[i - 1]);
    }
    return shortest;
}

// Longest span
int Span::longestSpan() const {
    if (_numbers.size() < 2) {
        throw NoSpanException();
    }
    int min = *std::min_element(_numbers.begin(), _numbers.end());
    int max = *std::max_element(_numbers.begin(), _numbers.end());
    return max - min;
}

// Exception messages
const char* Span::NoSpanException::what() const throw() {
    return "Span cannot be found (not enough numbers).";
}

const char* Span::StorageFullException::what() const throw() {
    return "Storage is full. Cannot add more numbers.";
}

