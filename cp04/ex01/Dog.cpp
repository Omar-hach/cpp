/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 08:17:54 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/29 17:11:45 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Dog.hpp"

Dog::Dog( void ){
    type = "Dog";
    livingBrain = new Brain();
	std::cout << "Constructor Dog called"<< std::endl;
}

Dog::~Dog( void ){
    std::cout << "Deconstructor Dog called"<< std::endl;
    if(livingBrain)
	    delete livingBrain;
}

Dog::Dog(const Dog& object){
	std::cout << "Copy constructor WrongAnimal called"<< std::endl;
    this->type = object.type;
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