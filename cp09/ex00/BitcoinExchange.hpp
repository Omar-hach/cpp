/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:51:12 by ohachami          #+#    #+#             */
/*   Updated: 2024/03/07 12:32:45 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
# include <iostream>
# include <fstream>
# include <iterator>
# include <list>
# include <stack>

class BitcoinExchange{
    private:
	public:
		BitcoinExchange( void );
		~BitcoinExchange( void );
};

/*template< typename T >
int	MutantStack(T& list, int& y){
	for(typename T::iterator it = list.begin(); it != list.end(); it++)
	{
		if(*it == y){
			std::cout << "right" << std::endl;
			return 0;
		}
	}
	std::cout << "wrong" << std::endl;
	return 1;
}*/


#endif

