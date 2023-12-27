/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:24:32 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/27 06:54:36 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

const int Fixed::fractBits = 8;

Fixed::Fixed( void ){
	this->integer = 0;
	//std::cout << "Default constructor called"<< std::endl;
}

Fixed::~Fixed( void ){
	//std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &object){
	//std::cout << "Copy constructor called"<< std::endl;
	*this = object;
}

Fixed::Fixed(const int intgr){
	//std::cout << "Int constructor called " << intgr << std::endl;
	this->integer = intgr << fractBits;
}

Fixed::Fixed(const float floating){
	//std::cout << "Float constructor called"<< std::endl;
	this->integer = round(floating * (1 << fractBits));
}

Fixed& Fixed::operator=(const Fixed& F){
	this->integer = F.integer;
	return *this;
}

Fixed Fixed::operator+(const Fixed& F){
	Fixed  tmp;
	tmp.integer = ((this->integer + F.integer));
	return tmp;
}
Fixed Fixed::operator*(const Fixed& F){
	Fixed  tmp;
	tmp.integer = ((this->integer * F.integer) >> (fractBits));
	return tmp;
}
Fixed Fixed::operator/(const Fixed& F){
	Fixed  tmp;
	tmp.integer = round(((float) this->integer / F.integer ) * (1 << fractBits));
	return tmp;
}
Fixed Fixed::operator-(const Fixed& F){
	Fixed  tmp;
	tmp.integer = ((this->integer - F.integer));
	return tmp;
}

bool Fixed::operator!=(const Fixed& F) const{
	return this->integer != F.getRawBits();
}
bool Fixed::operator>(const Fixed& F) const{
	return this->integer > F.getRawBits();
}
bool Fixed::operator>=(const Fixed& F) const{
	return this->integer >= F.getRawBits();
}
bool Fixed::operator==(const Fixed& F) const{
	return this->integer == F.getRawBits();
}
bool Fixed::operator<(const Fixed& F) const{
	return this->integer < F.getRawBits();
}
bool Fixed::operator<=(const Fixed& F) const{
	return this->integer <= F.getRawBits();
}

Fixed& Fixed::min(Fixed& F, Fixed& E){
	if(F.getRawBits() > E.getRawBits())
		return F;
	else
		return E;
}

Fixed& Fixed::min(const Fixed& F, const Fixed& E){
	if(F.getRawBits() < E.getRawBits())
		return const_cast<Fixed&>(F);
	else
		return const_cast<Fixed&>(E);
}

Fixed& Fixed::max(Fixed& F, Fixed& E){
	if(F.getRawBits() > E.getRawBits())
		return F;
	else
		return E;
}

Fixed& Fixed::max(const Fixed& F, const Fixed& E){
	if(F.getRawBits() < E.getRawBits())
		return const_cast<Fixed&>(F);
	else
		return const_cast<Fixed&>(E);
}

Fixed &Fixed::operator++(void){
	this->integer++;
	return *this;
}
Fixed &Fixed::operator--(void){
	this->integer--;
	return *this;
}
Fixed Fixed::operator++(int const){
	Fixed tmp = *this;
	this->integer++;
	return tmp;
}
Fixed Fixed::operator--(int const){
	Fixed tmp = *this;
	this->integer--;
	return tmp;
}

std::ostream &operator<<(std::ostream &out, const Fixed& F)
{
	out << F.toFloat();
	return out;
}

int Fixed::getRawBits( void ) const{
	//std::cout << "getRawBits member function called"<< std::endl;
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
