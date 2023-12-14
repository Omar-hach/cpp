/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 22:16:35 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/12 15:53:11 by ohachami         ###   ########.fr       */
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
	return ;
}

Zombie::~Zombie(void){
	return ;
}

