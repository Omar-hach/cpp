/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 08:12:20 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/29 11:52:47 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"WrongCat.hpp"

WrongCat::WrongCat( void ){
    type = "WrongCat";
	std::cout << "Constructor WrongCat called"<< std::endl;
}

WrongCat::~WrongCat( void ){
    std::cout << "Deconstructor WrongCat called"<< std::endl;
}

WrongCat::WrongCat(const WrongCat& object){
	std::cout << "Copy constructor WrongAnimal called"<< std::endl;
    this->type = object.type;
}

WrongCat& WrongCat::operator=(const WrongCat& object){
    this->type = object.type;
	return *this;
}

void WrongCat::makeSound( void ) const{
	std::cout << "nyaa" << std::endl;
}
