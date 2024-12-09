/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:19:42 by hel-band          #+#    #+#             */
/*   Updated: 2024/11/18 22:01:11 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _currentIndex(0), _contactCount(0) {}

void PhoneBook::addContact()
{
    std::string firstName, lastName, nickname, phoneNumber, darkestSecret;

    // Check for EOF before each input
    std::cout << "Enter First Name: ";
    if (!std::getline(std::cin, firstName)) return; 

    std::cout << "Enter Last Name: ";
    if (!std::getline(std::cin, lastName)) return; 

    std::cout << "Enter Nickname: ";
    if (!std::getline(std::cin, nickname)) return; 

    std::cout << "Enter Phone Number: ";
    if (!std::getline(std::cin, phoneNumber)) return;
    for (size_t i = 0; i < phoneNumber.length(); ++i) {
        if (!std::isdigit(phoneNumber[i])) {
            std::cout << "Error: Phone number must contain only digits.\n";
            return;  // Reject if non-digit characters are found
        }
    }
    std::cout << "Enter Darkest Secret: ";
    if (!std::getline(std::cin, darkestSecret)) return;

    // Check for empty fields
    if (firstName.empty() || lastName.empty() || nickname.empty() ||
        phoneNumber.empty() || darkestSecret.empty())
    {
        std::cout << "Error: All fields must be filled.\n";
        return; 
    }

    // Set contact details
    contacts[_currentIndex].setFirstName(firstName);
    contacts[_currentIndex].setLastName(lastName);
    contacts[_currentIndex].setNickName(nickname);
    contacts[_currentIndex].setPhoneNumber(phoneNumber);
    contacts[_currentIndex].setDarkestSecret(darkestSecret);
    _currentIndex = (_currentIndex + 1) % 8;
    if (_contactCount < 8) _contactCount++;
}
void PhoneBook::searchContacts() const
{
    if (_contactCount == 0) {
        std::cout << "PhoneBook is empty.\n";
        return ;
    }
    std::cout << "|     Index|First Name| Last Name| Nickname |\n";
    std::cout << "---------------------------------------------\n";
    for (int i = 0; i < _contactCount; ++i) {
        contacts[i].displaySummary(i);
    }
    std::cout << "Enter the index to display details: ";
    int index;
    if (!(std::cin >> index)) {
        std::cout << "Invalid input. Please enter an integer.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
        return;
    }
    std::cin.ignore();
    if (index >= 0 && index < _contactCount) {
        contacts[index].displayDetails();
    } else {
        std::cout << "Invalid index. Please enter a valid index.\n";
    }
}