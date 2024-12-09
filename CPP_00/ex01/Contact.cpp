/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:35:30 by hel-band          #+#    #+#             */
/*   Updated: 2024/11/04 13:58:08 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {

}

// Setters
void Contact::setFirstName(const std::string &firstName) {
    _firstName = firstName;
}

void Contact::setLastName(const std::string &lastName) {
    _lastName = lastName;
}

void Contact::setNickName(const std::string &nickname) {
    _nickName = nickname;
}

void Contact::setPhoneNumber(const std::string &phoneNumber) {
    _phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(const std::string &darkestSecret) {
    _darkestSecret = darkestSecret;
}

// Getters
std::string Contact::getFirstName() const { return _firstName; }
std::string Contact::getLastName() const { return _lastName; }
std::string Contact::getNickName() const { return _nickName; }
std::string Contact::getPhoneNumber() const { return _phoneNumber; }
std::string Contact::getDarkestSecret() const { return _darkestSecret; }

// Format field for display
std::string Contact::formatField(const std::string &field) const {
    return field.length() > 10 ? field.substr(0, 9) + "." : field;
}

// Display summary
void Contact::displaySummary(int index) const {
    std::cout << "|" << std::setw(10) << index << "|";
    std::cout << std::setw(10) << formatField(getFirstName()) << "|";
    std::cout << std::setw(10) << formatField(getLastName()) << "|";
    std::cout << std::setw(10) << formatField(getNickName()) << "|\n";
}

// Display details
void Contact::displayDetails() const {
    std::cout << "First Name: " << getFirstName() << "\n";
    std::cout << "Last Name: " << getLastName() << "\n";
    std::cout << "Nickname: " << getNickName() << "\n";
    std::cout << "Phone Number: " << getPhoneNumber() << "\n";
    std::cout << "Darkest Secret: " << getDarkestSecret() << "\n";
}
