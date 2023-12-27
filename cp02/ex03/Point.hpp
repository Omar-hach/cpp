/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 06:47:10 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/27 06:41:49 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
#include "Fixed.hpp"

class Point{
	private:
		Fixed const x;
		Fixed const y;
	public:
		Point( void );
		~Point( void );
		Point(const Point &object);
		Point(Fixed const x, Fixed const y);
		Point &operator=(const Point& P);
		Fixed getX( void ) const;
		Fixed getY( void ) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif