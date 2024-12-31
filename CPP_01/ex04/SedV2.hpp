/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedV2.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:15:40 by hel-band          #+#    #+#             */
/*   Updated: 2024/10/31 16:16:00 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SEDV2_HPP
#define SEDV2_HPP

#include <iostream>
#include <fstream>
#include <string>

class SedV2 {
private:
    std::string _inFile;
    std::string _outFile;

public:
    SedV2(const std::string &filename);
    ~SedV2() {}

    void replace(const std::string &s1, const std::string &s2);
};

#endif
