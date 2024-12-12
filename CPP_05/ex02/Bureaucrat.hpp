/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:38:09 by hel-band          #+#    #+#             */
/*   Updated: 2024/12/11 19:53:05 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
private:
    const std::string _name;
    int _grade;

    Bureaucrat();

public:
    Bureaucrat(const std::string& name, int grade);
    Bureaucrat(const Bureaucrat& src);
    ~Bureaucrat();

    Bureaucrat& operator=(const Bureaucrat& rhs);
    static int const	highestGrade = 1;
	static int const	lowestGrade = 150;
    std::string getName() const;
    int getGrade() const;

    void incrementGrade();
    void decrementGrade();
    void signForm(AForm& form) const;
    void	executeForm(AForm & form) const;

    ///* ---------------- Exception Classes ---------------- */
    class GradeTooHighException : public std::exception {
    public:
        virtual const char* what() const throw() { return "Grade too high"; }
    };

    class GradeTooLowException : public std::exception {
    public:
        virtual const char* what() const throw() { return "Grade too low"; }
    };
};

std::ostream& operator<<(std::ostream& o, const Bureaucrat& rhs);  // Overload << to output Bureaucrat object

#endif // BUREAUCRAT_HPP
