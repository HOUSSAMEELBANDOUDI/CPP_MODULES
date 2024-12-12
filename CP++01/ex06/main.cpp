/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:48:01 by hel-band          #+#    #+#             */
/*   Updated: 2024/11/19 15:34:28 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cout << "Usage: ./harlFilter <level>" << std::endl
			<< "Levels are: DEBUG - INFO - WARNING - ERROR" << std::endl;
        return 1;
    }

    Harl harl;
    harl.complain(argv[1]);
    return 0;
}
