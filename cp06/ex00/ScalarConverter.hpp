/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 04:33:06 by ohachami          #+#    #+#             */
/*   Updated: 2024/01/11 05:44:58 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include<iostream>
class ScalarConverter{
    private:
    void *
    public:
	char	toChar(void) const;
	int		toInt(void) const;
	float	toFloat(void) const;
	double	toDouble(void) const;
    convert( std::string parameter );
    ScalarConverter( void );
    ~ScalarConverter( void );
    ScalarConverter(const ScalarConverter& object);
	ScalarConverter& operator=( const ScalarConverter& object );
};
#endif