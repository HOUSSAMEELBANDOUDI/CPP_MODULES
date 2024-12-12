/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:46:19 by hel-band          #+#    #+#             */
/*   Updated: 2024/11/01 12:47:40 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug()
{
    std::cout << "[ DEBUG ]\nI love having extra bacon..." << std::endl;
}

void Harl::info()
{
    std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money..." << std::endl;
}

void Harl::warning()
{
    std::cout << "[ WARNING ]\nI think I deserve some extra bacon for free..." << std::endl;
}

void Harl::error()
{
    std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    void (Harl::*functions[])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
    std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    int i;

    for (i = 0; i < 4; ++i)
    {
        if (level == levels[i]) break;
    }

    switch (i)
    {
        case 0: (this->*functions[0])();
        case 1: (this->*functions[1])();
        case 2: (this->*functions[2])();
        case 3: (this->*functions[3])(); break;
        default: std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}
