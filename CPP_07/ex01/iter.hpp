/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:01:32 by hel-band          #+#    #+#             */
/*   Updated: 2024/12/19 20:33:12 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>
#include <cstddef>

template <typename T>
void iter(T* array, size_t length, void (*func)(T&)) {
    if (!array || !func)
        return;
    for (size_t i = 0; i < length; ++i) {
        func(array[i]);
    }
}

#endif
