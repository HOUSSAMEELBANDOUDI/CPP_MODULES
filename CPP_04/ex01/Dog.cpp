/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 20:42:46 by hel-band          #+#    #+#             */
/*   Updated: 2024/12/05 20:46:10 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal(), brain(new Brain())
{
	std::cout <<"Dog default constructor called."<< std::endl;
	this->type = "Dog";
	return ;
}

Dog::Dog(Dog const & src) : Animal(), brain(NULL)
{
	std::cout <<"Dog copy constructor called."<< std::endl;
	*this = src;
	return ;
}

Dog::~Dog(void)
{
	std::cout <<"Dog destructor called."<< std::endl;
	delete this->brain;
	return ;
}

Dog &	Dog::operator=(Dog const & src)
{
	std::cout <<"Dog assignment overload operator called."<< std::endl;
	if (this != &src)
	{
		this->type = src.type;
		if (this->brain != NULL)
			delete this->brain;
		this->brain = new Brain(*src.brain);
	}
	return (*this);
}

Brain *	Dog::getBrain(void) const
{
	return (this->brain);
}

void	Dog::makeSound(void) const
{
	std::cout<< this->type << "Woof Woof Woof!" << std::endl;
	return ;
}
