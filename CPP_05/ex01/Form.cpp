/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:03:58 by hel-band          #+#    #+#             */
/*   Updated: 2024/12/10 13:34:24 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string& name, int gradeToSign, int gradeToExecute)
    : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    if (_gradeToSign < 1 || _gradeToExecute < 1)
        throw GradeTooHighException();
    if (_gradeToSign > 150 || _gradeToExecute > 150)
        throw GradeTooLowException();
}

Form::Form(const Form& other)
    : _name(other._name), _signed(other._signed), 
      _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute) {}

Form::~Form() {}

Form& Form::operator=(const Form& other) {
    if (this != &other) {
        this->_signed = other._signed;
    }
    return *this;
}

std::string Form::getName() const {
    return _name;
}

bool   Form::getSigned() const {
    return _signed;
}

int   Form::getGradeToSign() const {
    return _gradeToSign;
}

int   Form::getGradeToExecute() const {
    return _gradeToExecute;
}

void    Form::beSigned(const Bureaucrat& bureaucrat) {
    if ( bureaucrat.getGrade() > _gradeToSign )
        throw Form::GradeTooLowException();
    _signed = true;
}

std::ostream& operator<<(std::ostream& os, const Form& form) {
    os << "Form: " << form.getName() 
       << ", Signed: " << (form.getSigned() ? "Yes" : "No")
       << ", Grade required to sign: " << form.getGradeToSign()
       << ", Grade required to execute: " << form.getGradeToExecute();
    return os;
}
