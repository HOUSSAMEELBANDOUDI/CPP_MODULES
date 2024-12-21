/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 18:05:31 by hel-band          #+#    #+#             */
/*   Updated: 2024/12/20 18:14:51 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <algorithm>

int main() {
    // Initialize vector and list manually
    std::vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    std::list<int> l;
    l.push_back(5);
    l.push_back(15);
    l.push_back(25);
    l.push_back(35);

    easyfind(v, 20);  // Outputs: Found.
    easyfind(v, 50);  // Outputs: Not found.
    easyfind(l, 15);  // Outputs: Found.
    easyfind(l, 100); // Outputs: Not found.

    return 0;
}