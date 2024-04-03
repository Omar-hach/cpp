/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 23:44:39 by ohachami          #+#    #+#             */
/*   Updated: 2024/04/03 20:13:55 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <iterator>
# include <algorithm>
# include <list>
# include <vector>

template< typename T >
int	easyfind(T& list, int& y){
	if(std::find(list.begin(), list.end(), y) == list.end()){
		std::cout << "this element (" << y <<") exist" << std::endl;
		return 0;
	}
	std::cout << "this element (" << y <<") don't exist" << std::endl;
	return 1;
}


#endif