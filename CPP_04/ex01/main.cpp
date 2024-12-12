/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 20:46:32 by hel-band          #+#    #+#             */
/*   Updated: 2024/12/07 22:42:16 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const int arraySize = 4;

    // Create an array of Animal pointers
    const Animal* animals[arraySize];

    // Fill half with Dogs and half with Cats
    for (int i = 0; i < arraySize; ++i) {
        if (i < arraySize / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    // Verify polymorphic behavior
    std::cout << "\nAnimals making sounds:" << std::endl;
    for (int i = 0; i < arraySize; ++i) {
        animals[i]->makeSound();
    }

    // Delete all objects
    for (int i = 0; i < arraySize; ++i) {
        delete animals[i];
    }
    return 0;
}
