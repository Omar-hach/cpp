/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 10:48:37 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/30 09:56:17 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ){
	std::cout << "Constructor Brain called"<< std::endl;
	ideas = new std::string[100];
}

Brain::~Brain( void ){
	std::cout << "Deconstructor Brain called"<< std::endl;
	delete[] ideas;
}

Brain::Brain(const Brain& object){
	std::cout << "Copy constructor Brain called"<< std::endl;
   *this = object;
}

Brain& Brain::operator=(const Brain& object){
	if (ideas)
		delete[] ideas;
	ideas = new std::string[100];
	for(int i = 0; i < 100; i++)
		this->ideas[i] = object.ideas[i];
	return *this;
}
