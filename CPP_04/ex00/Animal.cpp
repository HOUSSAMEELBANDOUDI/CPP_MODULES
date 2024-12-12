/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 10:35:58 by hel-band          #+#    #+#             */
/*   Updated: 2024/12/05 11:26:13 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal") {
    std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(std::string const & type) : type(type)
{
	std::cout << "Animal type constructor called." << std::endl;
}
Animal::Animal(const Animal& other) {
    *this = other;
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
    if (this != &other) {
        this->type = other.type;
    }
    std::cout << "Animal copy assignment operator called" << std::endl;
    return *this;
}

void Animal::makeSound() const {
    std::cout << "Animal makes a generic sound" << std::endl;
}

std::string Animal::getType() const {
    return type;
}
