/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 20:46:40 by hel-band          #+#    #+#             */
/*   Updated: 2024/12/11 20:05:46 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>
#include <cstdlib>

AForm::AForm(const std::string& name, int gradeToSign, int gradeToExecute)
    : _name(name), _isSigned(false), _gradeRequiredToSign(gradeToSign),
        _gradeRequiredToExecute(gradeToExecute)
{
    if (_gradeRequiredToSign< 1 || _gradeRequiredToExecute< 1)
        throw GradeTooHighException();
    if (_gradeRequiredToSign > 150 || _gradeRequiredToExecute> 150)
        throw GradeTooLowException();
}

AForm::AForm(const AForm& other)
    : _name(other._name), _isSigned(other._isSigned), 
      _gradeRequiredToSign(other._gradeRequiredToSign),
      _gradeRequiredToExecute(other._gradeRequiredToExecute) {}
AForm& AForm::operator=(const AForm& other) {
    if (this != &other) {
        this->_isSigned = other._isSigned;
    }
    return *this;
}

AForm::~AForm() {}

std::string const &	AForm::getName(void) const
{
	return (this->_name);
}

bool	AForm::isSigned(void) const
{
	return (this->_isSigned);
}

int	AForm::getGradeRequiredToSign(void) const
{
	return (this->_gradeRequiredToSign);
}

int	AForm::getGradeRequiredToExecute(void) const
{
	return (this->_gradeRequiredToExecute);
}
void	AForm::execute(Bureaucrat const & bureaucrat) const
{
	if (this->_isSigned == false)
		throw (AForm::NotSignedException());
	if (bureaucrat.getGrade() > this->_gradeRequiredToExecute)
		throw (AForm::GradeTooLowException());
	this->beExecuted();
	return ;
}

void	AForm::beSigned(Bureaucrat const & bureaucrat)
{
	if (this->_isSigned)
		throw (AForm::AlreadySignedException());
	if (bureaucrat.getGrade() > this->_gradeRequiredToSign)
		throw (AForm::GradeTooLowException());
	this->_isSigned = true;
	return ;
}

const char *	AForm::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high for form.");
}

const char *	AForm::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low for form.");
}

const char *	AForm::AlreadySignedException::what(void) const throw()
{
	return ("Form is already signed.");
}

const char *	AForm::NotSignedException::what(void) const throw()
{
	return ("Form has not been signed.");
}
std::ostream &	operator<<(std::ostream & os, AForm const & obj)
{
	os << "\"" << obj.getName() << "\" ["
		<< (obj.isSigned() ? "signed" : "unsigned") << "] "
		<< "(Required grade to sign: " << obj.getGradeRequiredToSign()
		<< "; to execute: " << obj.getGradeRequiredToExecute() << ")";
	return (os);
}
