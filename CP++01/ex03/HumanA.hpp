/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:12:49 by hel-band          #+#    #+#             */
/*   Updated: 2024/11/04 15:02:46 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// HumanA.hpp
#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA
{
  private:
    std::string name;
    Weapon& weapon;

  public:
    HumanA(const std::string& name, Weapon& weapon); // Constructor
    void attack() const; // Method to perform attack
};

#endif