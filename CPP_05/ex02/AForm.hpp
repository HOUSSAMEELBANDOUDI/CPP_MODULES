/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:42:07 by hel-band          #+#    #+#             */
/*   Updated: 2024/12/11 19:53:21 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
 private:
   std::string const	_name;
	bool				_isSigned;
	int const			_gradeRequiredToSign;
	int const			_gradeRequiredToExecute;
 protected:
    virtual void beExecuted(void) const = 0;
 public:
    AForm(void);
	AForm(AForm const & src);
	AForm(std::string const & name, int const gradeToSign, int const gradeToExecute);
	virtual ~AForm(void);

	AForm &	operator=(AForm const & src);
    
    std::string const&	getName(void) const;
	bool			isSigned(void) const;
	int				getGradeRequiredToSign(void) const;
	int				getGradeRequiredToExecute(void) const;
    
	void	beSigned(Bureaucrat const & bureaucrat);
	void	execute(Bureaucrat const & bureaucrat) const;

	class GradeTooHighException : public std::exception {
		public:
			virtual const char *	what(void) const throw();
	};

	class GradeTooLowException : public std::exception {
		public:
			virtual const char *	what(void) const throw();
	};

    class AlreadySignedException : public std::exception {
        public:
            virtual const char *	what(void) const throw();
    };

    class NotSignedException : public std::exception {
        public:
            virtual const char *	what(void) const throw();
    };
};

std::ostream &	operator<<(std::ostream & os, AForm const & obj);

#endif