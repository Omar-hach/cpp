/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:22:40 by ohachami          #+#    #+#             */
/*   Updated: 2024/03/22 01:44:08 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    if (argc < 2){
        std::cout << "Error: there is no file." << std::endl;
        return 1;
    }
    else if(argc > 2){
        std::cout << "Error: too much argement." << std::endl;
        return 1;
    }
	std::ifstream infile(argv[1]);
    if(!infile.is_open()){
		std::cout << "Error: can't open the file" << std::endl;
		return 1;
	}
	if(infile.peek() == std::ifstream::traits_type::eof()){
		std::cout << "Error: file is empty" << std::endl;
		return 1;
	}
    try
    {
        BitcoinExchange btc;
        std::map<double, double> map = btc.get_ExchangeRate();
        Exchange_Rate_calcul(infile, map);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}
