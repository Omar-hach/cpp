/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 08:17:54 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/30 15:48:54 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Dog.hpp"

Dog::Dog( void ){
    type = "Dog";
	std::cout << "Constructor Dog called"<< std::endl;
    livingBrain = new Brain();
}

Dog::~Dog( void ){
    std::cout << &livingBrain<< std::endl;
    if(livingBrain)
	    delete livingBrain;
    std::cout << "Deconstructor Dog called"<< std::endl;
}

Dog::Dog(const Dog& object){
	std::cout << "Copy constructor Dog called"<< std::endl;
	*this = object;
	std::cout << &object << " this " << this << std::endl;
}

Dog& Dog::operator=(const Dog& object){
	this->type = object.type;
	if (livingBrain)
		delete livingBrain;
	livingBrain = new Brain();
	*this->livingBrain = *object.livingBrain;
	return *this;
}

void Dog::makeSound( void ) const{
	std::cout << "woof" << std::endl;
}