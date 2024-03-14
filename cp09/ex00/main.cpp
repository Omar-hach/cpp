/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:22:40 by ohachami          #+#    #+#             */
/*   Updated: 2024/03/07 10:30:34 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    if (argc < 2){
        std::cout << "Error: could not open file." << std::endl;
        return 1;
    }
    else if(argc > 2){
        std::cout << "Error: too much argement." << std::endl;
        return 1;
    }
	std::ifstream infile(argv[1]);
    
}