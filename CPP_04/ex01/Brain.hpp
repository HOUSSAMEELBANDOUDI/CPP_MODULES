/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 19:27:43 by hel-band          #+#    #+#             */
/*   Updated: 2024/12/07 00:26:54 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	public:
		Brain(void);
		Brain(Brain const & src);
		~Brain(void);
		Brain &	operator=(Brain const & src);

		std::string const &	getIdea(int index) const;
		void	setIdea(int index, std::string const & idea);
		static int const nb_ideas = 100;

	private:
		std::string	_ideas[nb_ideas];
};

#endif
