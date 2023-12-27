/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 06:47:56 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/27 07:16:46 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed calcArea(Point const v, Point const w, Point const z){
    Fixed area = (v.getX() - z.getX()) * (w.getY() - v.getY()) - (v.getX() - w.getX()) * (z.getY() - v.getY());
    if (area < 0)
        return area * (-1);
    return area;
    
}

bool bsp( Point const a, Point const b, Point const c, Point const point){
    if((a.getX() == point.getX() && a.getY() == point.getY())
    || (b.getX() == point.getX() && b.getY() == point.getY())
    || (c.getX() == point.getX() && c.getY() == point.getY()))
        return 0;
    Fixed TotalArea = calcArea(a, b, c);
    Fixed FirsthArea = calcArea(a, b, point);
    Fixed SecondArea = calcArea(a, point, c);
    Fixed ThirdArea = calcArea(point, b, c);
    if(FirsthArea == 0 || SecondArea == 0 || ThirdArea == 0)
        return 0;
    return ((FirsthArea + SecondArea + ThirdArea) == TotalArea);
}
/*
|x1 y1 1|
|x2 y2 1| =  x1 * y2 + y1 * x3 + x2 *y3 - x3 * y2 - y3 * x1 - x2 * y1
|x3 y3 1| =  x3 * (y1 - y2) + x2 * (y3 - y1) + x1 * (y2 - y3)*/