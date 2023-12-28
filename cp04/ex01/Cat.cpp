/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 08:17:50 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/28 15:38:28 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Cat.hpp"

Cat::Cat( void ){
    type = "Cat";
	std::cout << "Constructor Cat called"<< std::endl;
}

Cat::~Cat( void ){
    std::cout << "Deconstructor Cat called"<< std::endl;
}

Cat::Cat(const Cat& object){
	std::cout << "Copy constructor WrongAnimal called"<< std::endl;
    this->type = object.type;
}

Cat& Cat::operator=(const Cat& object){
    this->type = object.type;
	return *this;
}

void Cat::makeSound( void ){
	std::cout << "nyaa" << std::endl;
}
