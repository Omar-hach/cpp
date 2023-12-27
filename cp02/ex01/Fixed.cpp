/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:24:32 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/26 11:41:48 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

const int Fixed::fractBits = 8;

Fixed::Fixed( void ){
	this->integer = 0;
	std::cout << "Default constructor called"<< std::endl;
}

Fixed::~Fixed( void ){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &object){
	std::cout << "Copy constructor called"<< std::endl;
	*this = object;
}

Fixed::Fixed(const int intgr){
	std::cout << "Int constructor called"<< std::endl;
	this->integer = intgr << fractBits;
}

Fixed::Fixed(const float floating){
	std::cout << "Float constructor called"<< std::endl;
	this->integer = round(floating * (1 << fractBits));
}

void Fixed::operator=(const Fixed& F){
	this->integer = F.integer;
}

int Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called"<< std::endl;
	return this->integer;
}

void Fixed::setRawBits( int const raw ){
	this->integer = raw;
}

float Fixed::toFloat( void ) const{
	return ((float) integer / (float)(1 << fractBits));
}

int Fixed::toInt( void ) const{
	return (round(integer >> fractBits));
}

std::ostream &operator<<(std::ostream &out, const Fixed& F){
	out << F.toFloat();
	return out;
}