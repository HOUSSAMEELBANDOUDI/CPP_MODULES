/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 15:41:43 by hel-band          #+#    #+#             */
/*   Updated: 2024/12/21 19:41:11 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include <iostream>
#include <fstream>
#include <limits>
#include <string>

enum e_type {
    NONE,
    INT,
    FLOAT,
    CHAR,
    DOUBLE,
    LITERALS
};

class Converter {

private:
    char    _c;
    int     _n;
    float   _f;
    double  _d;

    bool    _impossible;

    std::string _str;
    e_type      _type;

    Converter(std::string const & input);
public:
    Converter( void );
    Converter( const Converter& src );
    ~Converter( void );

    Converter& operator=( const Converter& rhs );
    
    static void	intMax();
	static void	intMin();
	static void	floatMax();
	static void	floatMin();
	static void	charMax();
	static void	charMin();

    char    getC( void ) const;
    void    setC( char c );

    int     getI( void ) const;
    void    setI( int n );

    float   getF( void ) const;
    void    setF( float f );

    double  getD( void ) const;
    void    setD( double d );

   void    convert( void );

    void    setStr( std::string str );
    std::string    getStr( void ) const;

    e_type  getType( void ) const;
    void    setType( void );

    bool    isChar( void ) const;
    bool    isInt( void ) const;
    bool    isFloat( void ) const;
    bool    isDouble( void ) const;

    bool    isImpossible( void );

    void    printChar( void ) const ;
    void    printInt( void ) const;
    void    printFloat( void ) const;
    void    printDouble( void ) const;

    bool    isLiterals( void ) const;

    class ConverterException : public std::exception {
        virtual const char* what() const throw() { return "Unknown type"; }
    };
};

std::ostream& operator<<( std::ostream& out, const Converter& rhs );

#endif // CONVERTER_HPP
