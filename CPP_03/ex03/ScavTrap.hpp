/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:16:20 by hel-band          #+#    #+#             */
/*   Updated: 2024/12/04 00:00:04 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
protected :
    ScavTrap();
public:
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const& src);
    ~ScavTrap();
    ScavTrap& operator=(ScavTrap const& src);
    void attack(const std::string& target);
    void guardGate();
};

#endif