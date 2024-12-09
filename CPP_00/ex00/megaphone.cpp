/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 11:31:00 by hel-band          #+#    #+#             */
/*   Updated: 2024/11/12 19:01:17 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int main (int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        for (int i = 1; av[i]; i++)
        {
            for (int j = 0; av[i][j]; j++)
                std::cout << (char)toupper(av[i][j]);
        }
    }
    std::cout<< std::endl;
    return (0);
}     