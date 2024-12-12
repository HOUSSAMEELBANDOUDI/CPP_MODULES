/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 18:47:08 by hel-band          #+#    #+#             */
/*   Updated: 2024/12/11 19:57:45 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( const std::string& target ) : AForm( "ShrubberyCreationForm", 145, 137 ), _target( target ) {}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& src ) : AForm( src ), _target( src._target ) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( ShrubberyCreationForm& src ) {
    this->_target = src._target;
	return (*this);
}

std::string const &	ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}

void	ShrubberyCreationForm::beExecuted(void) const
{
	std::ofstream	ofs;

	ofs.open((this->_target + "_shrubbery").c_str(),
								std::ofstream::out | std::ofstream::app);
	if (ofs.is_open())
	{
		if (std::rand() % 2)
			ofs << ShrubberyCreationForm::_shrubbery;
		else
			ofs << ShrubberyCreationForm::_shrubberyAlt;
		std::cout << "A shrubbery has been planted at "
				<< _target << "_shrubbery." << std::endl;
		ofs.close();
	}
	return ;
}

std::string const ShrubberyCreationForm::_shrubbery =
"\n"
"                %%%,%%%%%%%\n"
"                 ,'%% \\\\-*%%%%%%%\n"
"           ;%%%%%*%   _%%%%\"\n"
"            ,%%%       \\(_.*%%%%.\n"
"            % *%%, ,%%%%*(    '\n"
"          %^     ,*%%% )\\|,%%*%,_\n"
"               *%    \\/ #).-\"*%%*\n"
"                   _.) ,/ *%,\n"
"           _________/)#(_____________\n\n";

std::string const	ShrubberyCreationForm::_shrubberyAlt =
"\n"
"           \\/ |    |/\n"
"        \\/ / \\||/  /_/___/_\n"
"         \\/   |/ \\/\n"
"    _\\__\\_\\   |  /_____/_\n"
"           \\  | /          /\n"
"  __ _-----`  |{,-----------~\n"
"            \\ }{\n"
"             }{{\n"
"             }}{\n"
"             {{}\n"
"       , -=-~{ .-^- _\n"
"             `}\n"
"              {\n\n";