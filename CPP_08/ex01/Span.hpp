/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 19:08:17 by hel-band          #+#    #+#             */
/*   Updated: 2024/12/20 20:42:01 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <stdexcept>
#include <iterator>

class Span {
private:
    unsigned int        _maxSize;
    std::vector<int>    _numbers;

public:
    Span(unsigned int n);
    ~Span();
    Span(const Span& other);
    Span& operator=(const Span& other);

    void addNumber(int number);
    template <typename InputIterator>
    void addRange(InputIterator begin, InputIterator end) {
        if (std::distance(begin, end) > static_cast<int>(_maxSize - _numbers.size())) {
            throw StorageFullException();
        }
        _numbers.insert(_numbers.end(), begin, end);
    }

    int shortestSpan() const;
    int longestSpan() const;

    // Exception classes
    class NoSpanException : public std::exception {
        const char* what() const throw();
    };
    class StorageFullException : public std::exception {
        const char* what() const throw();
    };
};

#endif

