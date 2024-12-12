/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 15:12:31 by hel-band          #+#    #+#             */
/*   Updated: 2024/11/17 15:26:00 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
private :
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
