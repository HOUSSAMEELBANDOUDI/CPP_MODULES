/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 15:37:29 by hel-band          #+#    #+#             */
/*   Updated: 2024/12/23 19:35:11 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define SIZE 10

int main( void )
{
    std::cout << "-----------------------------------------------------" << std::endl;

    Array< float > test;

    Array< int > intArray( SIZE );
    Array< int > intArray2( SIZE - 5 );

    for ( unsigned int i = 0; i < intArray.size(); i++ )
        intArray[i] = i * 2;

    std::cout << "Int Array 1: " << intArray << std::endl;

    intArray2 = intArray;

    std::cout << "int Array 2: " << intArray2 << std::endl;

    try {
        std::cout << "Accessing a valid index: " << intArray[5] << std::endl;
        std::cout << "Accessing an invalid index: " << intArray[SIZE] << std::endl;
    } catch ( Array< int >::OutOfBoundsException& e ) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    std::cout << "-----------------------------------------------------" << std::endl;

    return ( 0 );
}