/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:38:42 by hel-band          #+#    #+#             */
/*   Updated: 2024/12/11 19:54:04 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string& name, int grade):_name(name),_grade(grade)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}
Bureaucrat::Bureaucrat(const Bureaucrat& src):_name(src._name), _grade(src._grade){}

Bureaucrat::~Bureaucrat(){}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
    if (this!= &other)
        this->_grade = other._grade;
    return (*this);
}

std::string Bureaucrat::getName() const{
    return _name;
}

int Bureaucrat::getGrade() const{
    return _grade;
}

void    Bureaucrat::incrementGrade() {
    if ( _grade - 1 < 1 )
        throw Bureaucrat::GradeTooHighException();
    _grade--;
}

void    Bureaucrat::decrementGrade() {
    if ( _grade + 1 > 150 )
        throw Bureaucrat::GradeTooLowException();
    _grade++;
}

void Bureaucrat::signForm(AForm& form) const {
    try {
        form.beSigned(*this);
        std::cout << _name << " signed " << form << std::endl;
    } catch (const AForm::GradeTooLowException& e) {
        std::cout << _name << " couldn’t sign " << form << " because " << e.what() << std::endl;
    }
}
void	Bureaucrat::executeForm(AForm & form) const
{
	try
	{
		form.execute(*this);
		std::cout << *this << " executed " << form <<  std::endl;
	}
	catch (std::exception const & e)
	{
		std::cout << *this << " couldn't execute " << form << " because: "
			<< e.what()  << std::endl;
	}
	return ;
}

std::ostream& operator<<( std::ostream& o, const Bureaucrat& rhs ) {
    o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
    return o;
}