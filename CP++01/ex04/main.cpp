/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:16:43 by hel-band          #+#    #+#             */
/*   Updated: 2024/11/04 15:25:32 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedV2.hpp"

int main(int argc, char **argv) {
    if (argc != 4) {
        std::cerr << "Usage: ./SedV2 <filename> <to_find> <replace>." << std::endl;
        return EXIT_FAILURE;
    }
    SedV2 sed2(argv[1]);
    sed2.replace(argv[2], argv[3]);
    return EXIT_SUCCESS;
}
