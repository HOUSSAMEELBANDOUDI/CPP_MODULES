/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 11:27:43 by hel-band          #+#    #+#             */
/*   Updated: 2024/11/01 12:28:26 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "DEBUG: I love having extra bacon..." << std::endl;
}

void Harl::info(void)
{
    std::cout << "INFO: I cannot believe adding extra bacon costs..." << std::endl;
}

void Harl::warning(void)
{
    std::cout << "WARNING: I think I deserve to have some extra bacon..." << std::endl;
}

void Harl::error(void)
{
    std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}
void Harl::complain(std::string level)
{
    void (Harl::*functions[])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
    std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };

    for (int i = 0; i < 4; i++)
    {
        if (level == levels[i])
        {
            (this->*functions[i])();
            return ;
        }
    }
    std::cout << "Unknown level: " << level << std::endl;
}