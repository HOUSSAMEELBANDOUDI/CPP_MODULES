/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedV2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:16:20 by hel-band          #+#    #+#             */
/*   Updated: 2024/11/04 15:38:20 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedV2.hpp"

SedV2::SedV2(const std::string &filename) : _inFile(filename) {
    _outFile = _inFile + ".replace";
}

void SedV2::replace(const std::string &s1, const std::string &s2)
{
    if (s1.empty()) {
        std::cerr << "Error: Search string (s1) cannot be empty." << std::endl;
        return ;
    }

    std::ifstream ifs(_inFile);
    if (!ifs.is_open())
    {
        std::cerr << "Error: Unable to open the input file." << std::endl;
        return ;
    }

    std::ofstream ofs(_outFile);
    if (!ofs.is_open())
    {
        std::cerr << "Error: Unable to create the output file." << std::endl;
        ifs.close();
        return ;
    }

    std::string line;
    while (std::getline(ifs, line)) {
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos) {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos += s2.length(); // Move past the inserted string
        }
        ofs << line << '\n'; // Write the modified line to the output file
    }

    ifs.close();
    ofs.close();
}
