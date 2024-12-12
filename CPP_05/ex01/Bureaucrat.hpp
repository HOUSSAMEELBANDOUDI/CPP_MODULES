/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:27:28 by hel-band          #+#    #+#             */
/*   Updated: 2024/12/10 20:46:17 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;
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
    std::string getName() const;
    int getGrade() const;

    void incrementGrade();
    void decrementGrade();
    void signForm(Form& form) const;

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
