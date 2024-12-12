/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 21:10:37 by hel-band          #+#    #+#             */
/*   Updated: 2024/12/07 23:24:05 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character(void);
		Character(Character const & src);
		Character(std::string const & name);
		~Character(void);

		Character &	operator=(Character const & src);

		std::string const &	getName(void) const;
		void	setName(std::string const & newName);
		void	equip(AMateria * m);
		void	unequip(int	idx);
		void	use(int idx, ICharacter & target);
		void	displayInventory(void) const;

	private:
		static int const	_inventorySize = 4;
		std::string	_name;
		AMateria *	_inventory[_inventorySize];

		void	_initializeEmptyInventory(void);
		void	_deleteInventory(void);
};

#endif