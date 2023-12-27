/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:24:32 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/26 11:43:55 by ohachami         ###   ########.fr       */
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

Fixed& Fixed::operator=(Fixed const & F){
    std::cout << "Copy assignment operator called"<< std::endl;
    this->integer = F.integer;
    return (*this);
}

int Fixed::getRawBits( void ) const{
    std::cout << "getRawBits member function called"<< std::endl;
    return this->integer;
}

void Fixed::setRawBits( int const raw ){
    this->integer = raw;
}