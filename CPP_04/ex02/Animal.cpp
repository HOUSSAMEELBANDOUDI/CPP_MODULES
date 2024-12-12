/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 22:25:47 by hel-band          #+#    #+#             */
/*   Updated: 2024/12/05 22:26:14 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Animal")
{
    std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal(Animal const & src)
{
    std::cout << "Animal copy constructor called." << std::endl;
    *this = src;
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor called." << std::endl;
}

Animal & Animal::operator=(Animal const & src)
{
    std::cout << "Animal copy assignment operator called." << std::endl;
    if (this != &src)
        this->_type = src._type;
    return *this;
}

std::string const & Animal::getType(void) const
{
    return this->_type;
}
