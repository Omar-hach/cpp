/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 04:33:02 by ohachami          #+#    #+#             */
/*   Updated: 2024/01/11 04:59:47 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter( void ){
    std::cout << "Constructor ScalarConverter called"<< std::endl;
}

ScalarConverter::~ScalarConverter( void ){
    std::cout << "Deonstructor ScalarConverter called"<< std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter& object){
    std::cout << "Copy constructor ScalarConverter called"<< std::endl;
    *this = object;
}

ScalarConverter& ScalarConverter::operator=( const ScalarConverter& object ){
    
}
