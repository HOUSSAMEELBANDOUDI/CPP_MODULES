/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:46:24 by hel-band          #+#    #+#             */
/*   Updated: 2024/11/19 13:14:15 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    // Create a zombie on the heap
    Zombie* heapZombie = newZombie("HeapZombie");
    heapZombie->announce();

    // Create a zombie on the stack
    randomChump("StackZombie");
    delete heapZombie;
    return 0;
}
