/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 23:28:44 by ohachami          #+#    #+#             */
/*   Updated: 2024/02/23 05:14:36 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template< typename T , typename S >
void	iter(T *array, S len, void (*f) (T &)){
	S i = -1;
	while(++i < len){
		f(array[i]);
	}
}

template< typename T >
void print(T & elem){
	std::cout << elem << std::endl;
}


#endif
