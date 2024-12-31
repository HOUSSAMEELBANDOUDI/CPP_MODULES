/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:46:48 by hel-band          #+#    #+#             */
/*   Updated: 2024/11/04 14:14:27 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, const std::string& name)
{
    if (N <= 0)
        return NULL;
    Zombie* horde = new Zombie[N];
    for (int i = 0; i < N; ++i)
    {
        horde[i].setName(name);
    }
    return horde;
}
