/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 17:53:24 by hel-band          #+#    #+#             */
/*   Updated: 2024/12/18 17:55:01 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Serializer.hpp"
#include "Data.hpp" 

int main() {
    // Create a Data object
    Data originalData;
    originalData.number = 42;
    originalData.text = "Hello, World!";

    // Print the original data
    std::cout << "Original Data:" << std::endl;
    std::cout << "  number: " << originalData.number << std::endl;
    std::cout << "  text: " << originalData.text << std::endl;

    // Serialize the pointer
    uintptr_t raw = Serializer::serialize(&originalData);
    std::cout << "\nSerialized address: " << raw << std::endl;

    // Deserialize the uintptr_t back to a Data pointer
    Data* deserializedData = Serializer::deserialize(raw);

    // Verify the deserialized data is the same
    std::cout << "\nDeserialized Data:" << std::endl;
    std::cout << "  number: " << deserializedData->number << std::endl;
    std::cout << "  text: " << deserializedData->text << std::endl;

    // Verify the pointer is the same
    if (deserializedData == &originalData) {
        std::cout << "\nSuccess: The deserialized pointer matches the original pointer." << std::endl;
    } else {
        std::cout << "\nError: The deserialized pointer does not match the original pointer." << std::endl;
    }

    return 0;
}
