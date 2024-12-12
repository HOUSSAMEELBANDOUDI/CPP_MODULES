/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 20:38:23 by hel-band          #+#    #+#             */
/*   Updated: 2024/12/08 12:30:57 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type("unknown")
{
	std::cout << "AMateria default constructor called." << std::endl;
	return ;
}

AMateria::AMateria(AMateria const & src) : _type(src._type)
{
	std::cout <<"AMateria copy constructor called."<< std::endl;
	return ;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout <<"AMateria type constructor called." << std::endl;
	return ;
}

AMateria::~AMateria(void)
{
	std::cout <<"AMateria destructor called." << std::endl;
	return ;
}

AMateria &	AMateria::operator=(AMateria const & src)
{
	std::cout <<"AMateria assignment operator overload called."<< std::endl;
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

void	AMateria::use(ICharacter & target)
{
	std::cout <<"* An unknown materia is being used against" << target.getName() << " *" << std::endl;
	return ;
}

std::string const &	AMateria::getType(void) const
{
	return (this->_type);
}