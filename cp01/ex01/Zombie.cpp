/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 22:16:35 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/17 17:03:16 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce( void ){
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..."<< std::endl;
}

void Zombie::set_name(std::string name){
	this->name = name;
}

std::string Zombie::get_name(void){
	return this->name;
}

Zombie::Zombie(void){
	std::cout << "object " << this->name << " created"<< std::endl;
}

Zombie::~Zombie(void){
	std::cout << "object " << this->name << " destroyed"<< std::endl;
}

