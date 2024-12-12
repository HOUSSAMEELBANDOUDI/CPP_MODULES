/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:43:21 by hel-band          #+#    #+#             */
/*   Updated: 2024/11/04 14:29:16 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
public:
    Zombie();
    void setName(const std::string& name);
    void announce() const;
    ~Zombie();

private:
    std::string _name;
};

Zombie* zombieHorde(int N, const std::string& name);
#endif