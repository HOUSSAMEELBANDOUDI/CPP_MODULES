/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 20:17:15 by hel-band          #+#    #+#             */
/*   Updated: 2024/12/07 00:40:17 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal(), brain(new Brain())
{
	std::cout <<"Cat default constructor called."<< std::endl;
	this->type = "Cat";
	return ;
}

Cat::Cat(Cat const & src) : Animal(src), brain(NULL) 
{
	std::cout <<"Cat copy constructor called."<< std::endl;
	*this = src;
	return ;
}

Cat::~Cat(void)
{
	std::cout <<"Cat destructor called."<< std::endl;
	delete this->brain;
	return ;
}

Cat &	Cat::operator=(Cat const & src)
{
	std::cout <<"Cat assignment overload operator called."<< std::endl;
	if (this != &src)
	{
		this->type = src.type;
		if (this->brain != NULL)
			delete (this->brain);
		this->brain = new Brain(*src.brain);
	}
	return (*this);
}

Brain *	Cat::getBrain(void) const
{
	return (this->brain);
}

void	Cat::makeSound(void) const
{
	std::cout<< this->type << ": * Meowwwww *"<< std::endl;
	return ;
}