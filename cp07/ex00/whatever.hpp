/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 22:30:10 by ohachami          #+#    #+#             */
/*   Updated: 2024/02/27 00:36:57 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include <iostream>

template< typename T >
void	swap(T & x, T & y){
	T z;
	
	z = x;
	x = y;
	y = z;
}

template< typename S >
S const &max(S const & x, S const & y){
	if(x > y)
		return x;
	return y;
}

template< typename M >
M const &min(M const & x, M const & y){
	if(x < y)
		return x;
	return y;
}

#endif
