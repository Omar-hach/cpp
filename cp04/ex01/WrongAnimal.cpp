/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 08:12:14 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/30 09:59:53 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ){
	type = "WrongAnimal";
	std::cout << "Constructor WrongAnimal called"<< std::endl;
}

WrongAnimal::~WrongAnimal( void ){
	std::cout << "Deconstructor WrongAnimal called"<< std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& object) : type(object.type){
	std::cout << "Copy constructor WrongAnimal called"<< std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& object){
	this->type = object.type;
	return *this;
}

std::string WrongAnimal::getType( void) const{
	return this->type;
}

void WrongAnimal::makeSound( void ) const{
	std::cout << "Animal noise" << std::endl;
}
