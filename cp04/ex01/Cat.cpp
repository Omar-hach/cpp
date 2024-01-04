/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 08:17:50 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/31 15:28:17 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Cat.hpp"

Cat::Cat( void ){
    type = "Cat";
	std::cout << "Constructor Cat called"<< std::endl;
    livingBrain = new Brain();
}

Cat::~Cat( void ){
    if(livingBrain)
	    delete livingBrain;
    std::cout << "Deconstructor Cat called"<< std::endl;
}

Cat::Cat(const Cat& object){
	livingBrain = NULL;
	std::cout << "Copy constructor Cat called"<< std::endl;
    *this = object;
}

Cat& Cat::operator=(const Cat& object){
    this->type = object.type;
    if (livingBrain)
		delete livingBrain;
	livingBrain = new Brain(*object.livingBrain);
	return *this;
}

void Cat::makeSound( void ) const{
	std::cout << "nyaa" << std::endl;
}
