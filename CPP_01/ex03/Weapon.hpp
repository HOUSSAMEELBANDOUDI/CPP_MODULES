/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:52:33 by hel-band          #+#    #+#             */
/*   Updated: 2024/11/04 15:03:24 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Weapon.hpp
#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{
  private:
    std::string type;

  public:
    Weapon(const std::string& type);
    const std::string& getType() const;
    void setType(const std::string& newType);
};

#endif
