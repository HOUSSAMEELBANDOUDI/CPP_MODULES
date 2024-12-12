/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 19:37:17 by hel-band          #+#    #+#             */
/*   Updated: 2024/12/11 19:57:22 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : AForm( "PresidentialPardonForm", 25, 5 ), _target( target ) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src) : AForm( src ), _target( src._target ) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm &	PresidentialPardonForm::operator=(
									PresidentialPardonForm const & src)
{
	this->_target = src._target;
	return (*this);
}

std::string const &	PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}

void	PresidentialPardonForm::beExecuted(void) const
{
	std::cout << this->_target
		<< " has been pardoned by Zaphod Beeblebrox." << std::endl;
	return ;
}