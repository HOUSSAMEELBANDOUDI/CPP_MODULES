/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 19:26:45 by hel-band          #+#    #+#             */
/*   Updated: 2024/12/11 20:29:09 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target ) : AForm("Robotomy Request Form", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src ) : AForm(src), _target(src._target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm&    RobotomyRequestForm::operator=( RobotomyRequestForm& src ) {
    this->_target = src._target;
	return (*this);
}

std::string const &	RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

void	RobotomyRequestForm::beExecuted(void) const
{
	std::cout << "* kzzzzt... drilling noises... bip bip bip... clang! *" << std::endl;
	if (std::rand() % 2)
		std::cout << this->_target << " successfully robotomized!" << std::endl;
	else
		std::cout << "Oh no! " << this->_target << " resisted robotomization..." << std::endl;
	return ;
}