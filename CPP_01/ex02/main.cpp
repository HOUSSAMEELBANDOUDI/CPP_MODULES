/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:22:48 by hel-band          #+#    #+#             */
/*   Updated: 2024/11/04 14:54:05 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// main.cpp
#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;    // Pointer to the string
    std::string& stringREF = str;     // Reference to the string
    //  Print memory addresses
    std::cout << "Memory address of the string variable: " << &str << std::endl;
    std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;
    //  Print values
    std::cout << "Value of the string variable: " << str << std::endl;
    std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;

    return 0;
}
