/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:50:41 by hel-band          #+#    #+#             */
/*   Updated: 2024/10/31 13:26:07 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Weapon.cpp
#include "Weapon.hpp"

Weapon::Weapon(const std::string& type)
{
    this->type = type;
}

const std::string& Weapon::getType() const
{
    return type;
}

void Weapon::setType(const std::string& newType)
{
    type = newType;
}
