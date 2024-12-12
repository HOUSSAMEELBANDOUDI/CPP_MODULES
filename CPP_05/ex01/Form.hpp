/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:36:37 by hel-band          #+#    #+#             */
/*   Updated: 2024/12/12 11:06:54 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
class Bureaucrat;  

class Form
{
 private:
    const std::string   _name;
    bool                _signed;
    const int           _gradeToSign;
    const int           _gradeToExecute;

    Form();
 public:
    Form(Form const & src);
    Form(std::string const & name, int const gradeToSign, int const gradeToExecute);
    ~Form(void);

    Form&   operator=( const Form& other );

    std::string getName() const;
    bool        getSigned() const;
    int         getGradeToSign() const;
    int         getGradeToExecute() const;

    void        beSigned( const Bureaucrat& bureaucrat );

    /* ---------------- Exception Classes ---------------- */
    class GradeTooHighException : public std::exception{
        public:
            virtual const char* what() const throw() { return "Grade too high"; }
    };
    class GradeTooLowException : public std::exception {
        public:
            virtual const char* what() const throw() { return "Grade too low"; }
    };
};

std::ostream&   operator<<( std::ostream& o, const Form& rhs );

#endif
