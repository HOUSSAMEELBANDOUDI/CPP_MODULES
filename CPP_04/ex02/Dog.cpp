/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 22:30:51 by hel-band          #+#    #+#             */
/*   Updated: 2024/12/05 22:31:13 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
    std::cout << "Dog default constructor called." << std::endl;
    this->_type = "Dog";
}

Dog::Dog(Dog const & src) : Animal()
{
    std::cout << "Dog copy constructor called." << std::endl;
    *this = src;
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor called." << std::endl;
}

Dog & Dog::operator=(Dog const & src)
{
    std::cout << "Dog copy assignment operator called." << std::endl;
    if (this != &src)
        this->_type = src._type;
    return *this;
}

void Dog::makeSound(void) const
{
    std::cout << this->_type << ": Woof Woof!" << std::endl;
}
