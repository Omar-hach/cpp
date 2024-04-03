/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:51:10 by ohachami          #+#    #+#             */
/*   Updated: 2024/03/30 23:28:46 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int is_not_space(char let)
{
	return !std::isspace(let);
}
double check_quantity(std::string line)
{
	char *rest;
	double quantity = std::strtod(line.c_str(), &rest);
	std::string rest_str(rest);
	if(std::find_if(rest_str.begin(), rest_str.end(), is_not_space) != rest_str.end()){
			std::cout << "Error: not a number." << std::endl;
			return -1;
	}
	if( quantity < 0 ){
		std::cout << "Error: not a positive number. " << std::endl;
		return -1;
	}
	else if(quantity  > 1000) {
		std::cout << "Error: too large a number. " << std::endl;
		return -1;
	}
	return quantity;
}

double check_date(int year, int mounth, int day)
{
	if(day < 1 || day > 31 || mounth > 12 || mounth < 1
		|| (mounth < 8 && mounth % 2 == 0 && day == 31)
		|| (mounth > 7 && mounth % 2 && day == 31)
		|| (mounth == 2 && day == 30)
		|| (year % 4 && mounth == 2 && day == 29))
	{
		std::cout << "Error: bad date => " << year << "-" << mounth << "-" << day << std::endl;
		return -1;
	}
	return year * 416 + mounth * 32 + day;
}


double check_line(std::string line)
{
	if(std::count(line.begin(), line.end(), '|') != 1){
		std::cout << "Error: bad input => " << line << std::endl;
		return -1;
	}
	std::string::iterator it = std::find_if(line.begin(), line.end(), is_not_space) ;
	std::string::iterator at = it;
    for (; !std::isspace(*at); at++) {
        if(!std::isdigit(*at) &&  *at != '-' &&  std::isspace(*at)){
			std::cout << "Error: Bad input => " << line << std::endl;
			return -1;
			}
    }
	std::string subline(it, at);
	if(std::count(it, at, '-') != 2 || subline.find_first_not_of("0123456789-") != std::string::npos){
		std::cout << "Error: bad input => " << line << std::endl;
		return -1;
	}
	return 0;
}

void Exchange_Rate_calcul( std::ifstream &infile , std::map<double, double> &ExchangeRate){
	std::string line;
	double  quantity = 0;
	int  date = 0;
	std::map<double, double>::iterator it;

	if( line.compare("date,exchange_rate") )
		getline(infile ,line);
	while(!infile.eof())
	{
		getline(infile ,line);
		if(!line.compare("date | value") )
			continue;
		if(line.empty() || check_line(line) < 0)
			continue;
		quantity = check_quantity(line.substr(line.find('|') + 1));
		date = check_date(static_cast<int>(std::strtod(line.c_str(), NULL)), static_cast<int>(std::strtod(line.c_str() + line.find("-") + 1, NULL)),
				static_cast<int>(std::strtod(line.c_str() + line.substr(0 , line.find("|")).rfind("-") + 1, NULL)));
		if (quantity < 0 || date < 0)
			continue;
		it = ExchangeRate.lower_bound(date);
		if(it == ExchangeRate.begin() && date < it->first)
			std::cout << "Error: Date too early => " << line << std::endl;
		else if(it != ExchangeRate.end())
			std::cout << date / 416 << "-" << (date % 416) / 32 << "-" << (date % 416) % 32 << " => " << quantity << " = " << it->second * quantity <<std::endl;
		else
			std::cout << "Error: Date too late => " << line << std::endl;
	}
}

BitcoinExchange::BitcoinExchange( void ){
	std::ifstream infile("./data.csv");
	std::string line;
	char	*mounth;
	char	*day;
	double  price = 0;
	double  date = 0;
	if(!infile.is_open()){
		throw std::invalid_argument("can't open data.csv");
	}
	if( line.compare("date,exchange_rate") )
		getline(infile ,line);
	while(!infile.eof())
	{
		getline(infile ,line);
		if(line.empty())
			continue;
		price = std::strtod(line.c_str() + line.find('|') + 1, NULL);
		date = std::strtod(line.c_str(), &mounth) * 416;
		date += std::strtod(mounth, &day) * (-32);
		date += (-1) * std::strtod(day, NULL);
		this->ExchangeRate[date] = price;
	}
}

BitcoinExchange::~BitcoinExchange( void ){
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& object){
	*this = object;
}

BitcoinExchange& BitcoinExchange::operator=( const BitcoinExchange& object ){
	this->ExchangeRate = object.ExchangeRate;
	return *this;
}

std::map<double, double> BitcoinExchange::get_ExchangeRate( void ){
	return this->ExchangeRate;
}
