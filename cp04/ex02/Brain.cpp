/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 10:48:37 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/29 10:48:52 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ){
	std::cout << "Constructor Brain called"<< std::endl;
}

Brain::~Brain( void ){
    std::cout << "Deconstructor Brain called"<< std::endl;
}

Brain::Brain(const Brain& object){
	std::cout << "Copy constructor WrongAnimal called"<< std::endl;
    this->type = object.type;
}

Brain& Brain::operator=(const Brain& object){
    this->type = object.type;
	return *this;
}
