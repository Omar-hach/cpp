/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 22:16:16 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/27 07:23:37 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) {
	Point  PX(1, 2);
	Point  P2(3, 3);
	Point  P3(0, 0);
	Point  P1(0, 3);

	std::cout << "is this point inside the triangle? ";
	if(bsp(P1, P2, P3, PX))
		std::cout << "yes" << std::endl;
	else
		std::cout << "no" << std::endl;
	return 0;
}
