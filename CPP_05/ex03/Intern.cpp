/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 22:03:22 by hel-band          #+#    #+#             */
/*   Updated: 2024/12/11 22:12:08 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

Intern::Intern() {}

Intern::Intern( const Intern& src ) {
    *this = src;
}

Intern::~Intern() {}

Intern& Intern::operator=( const Intern& rhs ) {
    ( void ) rhs;
    return (*this);
}

// Update parameter types to match declaration in Intern.hpp
AForm*   Intern::makeForm( std::string formName, std::string target) {   // Pass by value (not by reference)
   
    if (formName == "robotomy request") {
        std::cout << "Intern creates RobotomyRequestForm" << std::endl;
        return new RobotomyRequestForm(target);
    }
    else if (formName == "presidential pardon") {
        std::cout << "Intern creates PresidentialPardonForm" << std::endl;
        return new PresidentialPardonForm(target);
    }
    else if (formName == "shrubbery creation") {
        std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
        return new ShrubberyCreationForm(target);
    }
    std::cerr << "Error: Form \"" << formName << "\" does not exist." << std::endl;
    return NULL;
}
