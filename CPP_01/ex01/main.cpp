/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:49:47 by hel-band          #+#    #+#             */
/*   Updated: 2024/11/04 14:23:00 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int N = 5;
    Zombie* horde = zombieHorde(N, "Zombie");

    if (horde != NULL)
    {
        for (int i = 0; i < N; ++i)
        {
            horde[i].announce();
        }
        delete[] horde; 
    }
    return 0;
}