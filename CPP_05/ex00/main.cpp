/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 11:39:15 by hel-band          #+#    #+#             */
/*   Updated: 2024/12/12 11:06:07 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat bureaucrat("Ash", 150);
        std::cout << bureaucrat << std::endl;
        bureaucrat.decrementGrade(); // Should throw GradeTooLowException
    } catch ( Bureaucrat::GradeTooLowException& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Bureaucrat bureaucrat("Ash", 1);
        std::cout << bureaucrat << std::endl;
        bureaucrat.incrementGrade(); // Should throw GradeTooHighException
    } catch ( Bureaucrat::GradeTooHighException& e) {
        std::cout << e.what() << std::endl;
    }
    return EXIT_SUCCESS;
}
