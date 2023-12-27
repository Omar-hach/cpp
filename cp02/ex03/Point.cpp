/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 06:47:23 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/27 07:13:43 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) {
	//std::cout << "Default constructor P called" << std::endl;
}

Point::~Point( void ){
	//std::cout << "Destructor P called" << std::endl;
}

Point::Point(const Point &object) : x(object.x) , y(object.y){
	//std::cout << "Copy constructor P called"<< std::endl;
}

Point::Point(Fixed const x, Fixed const y) : x(x) , y(y){
}

Point &Point::operator=(const Point& P){
    (void)P;
    return *this;
}

Fixed Point::getX( void ) const{
    return this->x;
}

Fixed Point::getY( void ) const{
    return this->y;
}
