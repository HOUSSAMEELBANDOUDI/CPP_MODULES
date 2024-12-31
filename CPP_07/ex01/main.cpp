/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 13:58:48 by hel-band          #+#    #+#             */
/*   Updated: 2024/12/23 19:31:27 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void printElement(T& elem) {
    std::cout << elem << " ";
}

template <typename T>
void increment(T& elem) {
    ++elem;
}

int main() {
    // Test with an array of integers
    int intArray[] = {1, 2, 3, 4, 5};
    size_t intSize = sizeof(intArray) / sizeof(intArray[0]);
    std::cout << "Original intArray: ";
    iter(intArray, intSize, printElement);
    std::cout << "\nIncrementing intArray...\n";
    iter(intArray, intSize, increment);
    std::cout << "Modified intArray: ";
    iter(intArray, intSize, printElement);
    std::cout << "\n\n";

    // Test with an array of doubles
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4};
    size_t doubleSize = sizeof(doubleArray) / sizeof(doubleArray[0]);
    std::cout << "Original doubleArray: ";
    iter(doubleArray, doubleSize, printElement);
    std::cout << "\nIncrementing doubleArray...\n";
    iter(doubleArray, doubleSize, increment);
    std::cout << "Modified doubleArray: ";
    iter(doubleArray, doubleSize, printElement);
    std::cout << "\n\n";

    // Test with an array of strings
    std::string stringArray[] = {"hello", "world", "!"};
    size_t stringSize = sizeof(stringArray) / sizeof(stringArray[0]);
    std::cout << "Original stringArray: ";
    iter(stringArray, stringSize, printElement);
    std::cout << "\n";

    return 0;
}