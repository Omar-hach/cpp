/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:51:12 by ohachami          #+#    #+#             */
/*   Updated: 2024/03/30 23:23:32 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
# include <iostream>
# include <fstream>
# include <algorithm>
# include <cctype>
# include <iterator>
# include <map>

class BitcoinExchange{
    private:
		std::map<double, double> ExchangeRate;
	public:
		BitcoinExchange( void );
		~BitcoinExchange( void );
		BitcoinExchange(const BitcoinExchange& object);
		BitcoinExchange& operator=( const BitcoinExchange& object );
		std::map<double, double> get_ExchangeRate( void );
};

void Exchange_Rate_calcul( std::ifstream &infile , std::map<double, double> &ExchangeRate);


#endif

