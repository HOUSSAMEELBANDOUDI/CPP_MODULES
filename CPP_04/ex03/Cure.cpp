/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 21:53:27 by hel-band          #+#    #+#             */
/*   Updated: 2024/12/08 12:30:39 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"


Cure::Cure(void) : AMateria("cure")
{
	std::cout << "Cure default constructor called."<< std::endl;
	return ;
}

Cure::Cure(Cure const & src) : AMateria("cure")
{
	std::cout <<  "Cure copy constructor called."<< std::endl;
	*this = src;
	return ;
}

Cure::~Cure(void)
{
	std::cout <<"Cure destructor called." << std::endl;
	return ;
}

Cure &	Cure::operator=(Cure const & src)
{
	std::cout <<  "Cure assignment operator called." << std::endl;
	this->_type = src._type;
	return (*this);
}

AMateria *	Cure::clone(void) const
{
	AMateria *	cureClone = new Cure();
	return (cureClone);
}

void	Cure::use(ICharacter & target)
{
	std::cout <<"* heals " << target.getName() << "'s wounds *" << std::endl;
}
