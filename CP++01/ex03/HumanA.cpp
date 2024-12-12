/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:31:40 by hel-band          #+#    #+#             */
/*   Updated: 2024/11/04 15:23:02 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// HumanA.cpp
#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(const std::string& name, Weapon& weapon) : name(name), weapon(weapon) {}


void HumanA::attack() const
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

