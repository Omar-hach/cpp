/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 23:44:39 by ohachami          #+#    #+#             */
/*   Updated: 2024/03/06 13:07:23 by ohachami         ###   ########.fr       */
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
			std::cout << "this element exist" << std::endl;
			return 0;
		}
	}
	std::cout << "this element don't exist" << std::endl;
	throw std::length_error("exceed the max cap of element");
	return 1;
}


#endif