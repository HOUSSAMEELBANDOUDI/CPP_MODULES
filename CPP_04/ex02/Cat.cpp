/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 22:32:52 by hel-band          #+#    #+#             */
/*   Updated: 2024/12/05 22:33:03 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
    std::cout << "Cat default constructor called." << std::endl;
    this->_type = "Cat";
}

Cat::Cat(Cat const & src) : Animal()
{
    std::cout << "Cat copy constructor called." << std::endl;
    *this = src;
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor called." << std::endl;
}

Cat & Cat::operator=(Cat const & src)
{
    std::cout << "Cat copy assignment operator called." << std::endl;
    if (this != &src)
        this->_type = src._type;
    return *this;
}

void Cat::makeSound(void) const
{
    std::cout << this->_type << ": Meow Meow!" << std::endl;
}
