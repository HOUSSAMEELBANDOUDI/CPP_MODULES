/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 20:24:55 by hel-band          #+#    #+#             */
/*   Updated: 2024/12/08 12:30:53 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"
# include <string>
#include <iostream>

class ICharacter;

class AMateria
{
	public:
		AMateria(void);
		AMateria(AMateria const & src);
		AMateria(std::string const & type);
		virtual ~AMateria(void);

		AMateria &	operator=(AMateria const & src);

		std::string const & getType(void) const;
		virtual AMateria* clone(void) const = 0;
		virtual void use(ICharacter & target);

	protected:
		std::string	_type;

};

#endif
