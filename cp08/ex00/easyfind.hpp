/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 23:44:39 by ohachami          #+#    #+#             */
/*   Updated: 2024/03/02 11:44:15 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <iterator>
# include <list>
# include <vector>

template< typename T >
int	easyfind(T& list, int& y){
	for(typename T::iterator it = list.begin(); it != list.end(); it++)
	{
		if(*it == y){
			std::cout << "right" << std::endl;
			return 0;
		}
	}
	std::cout << "wrong" << std::endl;
	return 1;
}


#endif