/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 21:32:17 by hel-band          #+#    #+#             */
/*   Updated: 2024/12/08 12:30:16 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const & src);
		~MateriaSource(void);

		MateriaSource &	operator=(MateriaSource const & src);

		void		learnMateria(AMateria * m);
		AMateria *	createMateria(std::string const & type);
		void		displayKnownRecipes(void);

	private:
		static int const	_maxRecipes = 4;
		AMateria *	_recipes[_maxRecipes];

		void	_initializeEmptyRecipes(void);
		void	_deleteRecipes(void);
};

#endif