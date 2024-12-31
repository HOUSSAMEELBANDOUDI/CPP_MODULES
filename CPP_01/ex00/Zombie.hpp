/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:11:30 by hel-band          #+#    #+#             */
/*   Updated: 2024/11/04 14:08:54 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
   private:
     std::string _name;
   public:
     Zombie(const std::string& name);
     ~Zombie();
     void announce() const;
};

Zombie *newZombie(std::string name);
void   randomChump(std::string name);
#endif
