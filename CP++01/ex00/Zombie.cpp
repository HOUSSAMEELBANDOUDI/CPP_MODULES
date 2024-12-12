/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:24:46 by hel-band          #+#    #+#             */
/*   Updated: 2024/10/30 16:31:41 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(const std::string &name)
{
    _name = name;
}
Zombie::~Zombie()
{
    std::cout<< _name << " is being destroyed.\n";
}

void Zombie::announce() const
{
    std::cout<< _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}