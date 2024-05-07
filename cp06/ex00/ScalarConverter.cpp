/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 04:33:02 by ohachami          #+#    #+#             */
/*   Updated: 2024/04/29 04:32:23 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter( void ){
}

ScalarConverter::~ScalarConverter( void ){
}

ScalarConverter::ScalarConverter(const ScalarConverter& object){
	*this = object;
}

ScalarConverter& ScalarConverter::operator=( const ScalarConverter& object ){
	(void)object;
	return *this;
}

int detect_type( std::string parameter )
{
	int	i = 0;
	int	j = 0;
	int	inFloting = 0;
	if(parameter == ".f")
		return(-1);
	if(parameter == "-inff" || parameter == "-inf")
		return(200);
	if(parameter == "+inff" || parameter == "+inf" || parameter == "inff" || parameter == "inf")
		return(100);
	if(parameter == "nan")
		return(10);
	if((parameter[i] == '-' || parameter[i] == '+') && parameter.length() > 1)
		i++;
	while(std::isdigit(parameter[i]))
		i++;
	if(parameter[i] == '.' && parameter.length() > 1){
		inFloting++;
		j++;
		while(std::isdigit(parameter[i + j]))
			j++;
	}
	if(!inFloting && parameter[i] == 0)
		return(1);
	i += j;
	if(j > 0 && parameter[i] == 0)
		return(3);
	if(parameter[i] == 'f' && parameter[i + 1] == 0 && i != 0)
		return(2);
	if(parameter[i] != 0 && parameter.length() > 1)
		return(-1);
	return(0);
}

void toChar(std::string parameter, int type){
	char	ch = 0;
	char	*rest;
	double	max;

	max = std::strtod(parameter.c_str(), &rest);
	if (max > -128 &&  max < 127)
		ch = static_cast<char>(max);
	if (type == 0)
		std::cout << " char: '" << static_cast<char>(parameter[0]) << "'" << std::endl;
	else if (type == -1 || type > 9 || (max < 0 ||  max > 127))
		std::cout << " char: 'impossible'" << std::endl;
	else if (ch > 31 &&  ch < 127)
		std::cout << " char: '" << ch << "'" << std::endl;
	else
		std::cout << " char: 'Non displayable'" << std::endl;
}

void	toInt(std::string parameter, int type){
	char	*rest;
	double	number = 0;

	if (type == 0)
		std::cout << " int: '" << static_cast<int>(parameter[0]) << "'" << std::endl;
	else if (type == -1 || type > 9)
		std::cout << " int: 'impossible'" << std::endl;
	else{
		number = std::strtod(parameter.c_str(), &rest);
		if(number > INT32_MAX) 
			std::cout << " int: 'inf'" << std::endl;
		else if(number < INT32_MIN)
			std::cout << " int: '-inf'" << std::endl;
		else
			std::cout << " int: '" << static_cast<int>(number) << "'" << std::endl;
	}
}

void	toFloat(std::string parameter, int type){
	char	*rest;
	float	f;

	f = static_cast<float>(std::strtod(parameter.c_str(), &rest));
	std::cout << " float: '";
	if(type == 0)
		std::cout << std::fixed << std::setprecision(1) << static_cast<float>(parameter[0]) << "f";
	else if(type == -1)
		std::cout << "impossible";
	else if(type == 100)
		std::cout << "inff";
	else if(type == 200)
		std::cout << "-inff";
	else if(type == 10)
		std::cout << parameter << "f";
	else if(type == 1 || f == static_cast<float>(static_cast<int>(f)))
		std::cout << std::fixed << std::setprecision(1) << f << "f";
	else
		std::cout << f << "f";
	std::cout << "'" << std::endl;
}

void	toDouble(std::string parameter, int type){
	char	*rest;
	double	d;

	d = std::strtod(parameter.c_str(), &rest);
	std::cout << " double: '";
	if(type == 0)
		std::cout << std::fixed << std::setprecision(1) << static_cast<double>(parameter[0]);
	else if(type == -1)
		std::cout << "impossible";
	else if(type == 100)
		std::cout << "inf";
	else if(type == 200)
		std::cout << "-inf";
	else if(type == 10)
		std::cout << parameter;
	else if(type == 1 || d == static_cast<double>(static_cast<int>(d)))
		std::cout << std::fixed << std::setprecision(1) << d;
	else
		std::cout << d;
	std::cout << "'" << std::endl;
}

void ScalarConverter::convert( std::string parameter ){
	int	type;

	type = detect_type(parameter);
	toChar(parameter, type);
	toInt(parameter, type);
	toFloat(parameter, type);
	toDouble(parameter, type);
}

