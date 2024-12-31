/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:39:29 by hel-band          #+#    #+#             */
/*   Updated: 2024/11/04 15:17:38 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// HumanB.cpp
#include "HumanB.hpp"
#include <iostream>

// Constructor to initialize name and weapon pointer
HumanB::HumanB(const std::string& name) : name(name), weapon(NULL) {}

void HumanB::setWeapon(Weapon& newWeapon)
{
    weapon = &newWeapon; // Set the weapon pointer
}
void HumanB::attack() const
{
    if (weapon)
    {
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    }
    else
    {
        std::cout << name << " has no weapon to attack with!" << std::endl;
    }
}
