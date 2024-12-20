/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 17:41:05 by hel-band          #+#    #+#             */
/*   Updated: 2024/12/18 17:52:46 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include "Data.hpp"
#include <cstdint>

struct Data;

class Serializer {
public:
    // Convert pointer to unsigned integer
    static uintptr_t serialize(Data* ptr);

    // Convert unsigned integer back to pointer
    static Data* deserialize(uintptr_t raw);
};


#endif
