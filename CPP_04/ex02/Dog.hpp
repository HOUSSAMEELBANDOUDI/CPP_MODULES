/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 22:26:55 by hel-band          #+#    #+#             */
/*   Updated: 2024/12/07 01:06:19 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog(void);
        Dog(Dog const & src);
        ~Dog(void);
        Dog & operator=(Dog const & src);
        void makeSound(void) const;
};

#endif
