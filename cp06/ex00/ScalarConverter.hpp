/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 04:33:06 by ohachami          #+#    #+#             */
/*   Updated: 2024/02/04 05:20:26 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <iostream>
# include <cctype>
# include <sstream>
# include <iomanip> 

class ScalarConverter{
	public:
		static void convert( std::string parameter );
		ScalarConverter( void );
		~ScalarConverter( void );
		ScalarConverter(const ScalarConverter& object);
		ScalarConverter& operator=( const ScalarConverter& object );
};

void	toChar(std::string parameter, int type);
void	toInt(std::string parameter, int type);
void	toFloat(std::string parameter);
void	toDouble(std::string parameter);

#endif