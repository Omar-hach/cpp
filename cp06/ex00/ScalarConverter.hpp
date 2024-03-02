/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 04:33:06 by ohachami          #+#    #+#             */
/*   Updated: 2024/03/02 03:13:02 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <iostream>
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