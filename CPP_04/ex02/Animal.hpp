/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 22:21:09 by hel-band          #+#    #+#             */
/*   Updated: 2024/12/05 22:25:42 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
    public:
        Animal(void);
        Animal(Animal const & src);
        virtual ~Animal(void);
        Animal & operator=(Animal const & src);
        std::string const & getType(void) const;
        virtual void makeSound(void) const = 0;

    protected:
        std::string _type;
};

#endif
