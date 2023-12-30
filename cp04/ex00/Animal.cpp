/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 08:17:44 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/30 09:45:19 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Animal.hpp"

Animal::Animal( void ){
	type = "Animal";
	std::cout << "Constructor called"<< std::endl;
}

Animal::~Animal( void ){
	std::cout << "Deconstructor called"<< std::endl;
}

Animal::Animal(const Animal& object){
	*this = object;
	std::cout << "Copy constructor called"<< std::endl;
}

Animal& Animal::operator=(const Animal& object){
	this->type = object.type;
	return *this;
}

std::string Animal::getType( void) const{
	return this->type;
}

void Animal::makeSound( void ) const{
	std::cout << "animale noise" << std::endl;
}

