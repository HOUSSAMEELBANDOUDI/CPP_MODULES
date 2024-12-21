/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 18:00:49 by hel-band          #+#    #+#             */
/*   Updated: 2024/12/20 18:14:12 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

template <typename T >
void easyfind(T& container, int value)
{
    if (std::find(container.begin(),container.end(), value) != container.end())
        std::cout << "FOUND."<< std::endl;
    else
        std::cout << "NOT FOUND."<< std::endl;
}

#endif