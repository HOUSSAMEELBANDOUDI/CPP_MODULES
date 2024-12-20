/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 19:17:18 by hel-band          #+#    #+#             */
/*   Updated: 2024/12/19 21:57:42 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void) {
    srand(time(NULL));
    int randNum = rand() % 3;

    if (randNum == 0)
        return new A();
    else if (randNum == 1)
        return new B();
    else
        return new C();
}

// Function to identify the type using a pointer
void identify(Base* p) {
    if (dynamic_cast<A*>(p)) 
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}

// Function to identify the type using a reference
void    identify( Base& p ) {
    try {
        A& a = dynamic_cast< A& >( p );
        std::cout << "A" << std::endl;
        (void)a;
    } catch(const std::exception& e) {}
    try {
        B& b = dynamic_cast< B& >( p );
        std::cout << "B" << std::endl;
        (void)b;
    } catch( const std::exception& e ) {}
    try {
        C& c = dynamic_cast< C& >( p );
        std::cout << "C" << std::endl;
        (void)c;
    } catch( const std::exception& e ) {}
}


int main() {
    // Create a random object
    Base* randomBase = generate();

    // Identify the object type using a pointer
    std::cout << "Using pointer:" << std::endl;
    identify(randomBase);

    // Identify the object type using a reference
    std::cout << "Using reference:" << std::endl;
    identify(*randomBase);

    delete randomBase;

    return 0;
}
