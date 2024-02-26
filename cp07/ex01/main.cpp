/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 22:30:05 by ohachami          #+#    #+#             */
/*   Updated: 2024/02/23 00:19:33 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


int main( void ) {
	int len = 6;
	int array[6] = { 6, 8, 9 , 0 , 11, 84};
	iter<int>(array, len, print<int>);
	std::string words[6] = { "bunch", "of", "information" , "writhing" , "in", "english"};
	iter<std::string>(words, len, print);
	return 0;
}