/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:22:48 by hel-band          #+#    #+#             */
/*   Updated: 2024/12/11 22:54:53 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    try {
        Bureaucrat john("John", 10);
        Form formA("FormA", 5, 10);
        Form formB("FormB", 20, 10);

        std::cout << john << std::endl;
        std::cout << formA << std::endl;
        std::cout << formB << std::endl;

        john.signForm(formA); // Should succeed
        john.signForm(formB); // Should fail

    } catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    return 0;
}
