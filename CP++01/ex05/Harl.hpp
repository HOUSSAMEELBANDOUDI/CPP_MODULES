/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 11:22:59 by hel-band          #+#    #+#             */
/*   Updated: 2024/11/04 15:56:44 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
   private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
   public:
        void complain(std::string level);
};
#endif
