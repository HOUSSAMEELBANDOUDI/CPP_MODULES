/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 10:30:31 by hel-band          #+#    #+#             */
/*   Updated: 2024/12/06 23:57:03 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
protected:
    std::string type;

public:
    Animal();
    virtual ~Animal();
    Animal(std::string const & type);
    Animal(const Animal& other);
    Animal& operator=(const Animal& other);
    virtual void makeSound() const;
    std::string getType() const;
};

#endif
