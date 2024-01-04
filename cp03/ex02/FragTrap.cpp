/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 07:51:45 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/31 10:16:02 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ){
	this->Hit_points = 100;
	this->Energy_points = 100;
	this->Attack_damage = 30;
	this->Name = "";
	std::cout << "FragTrap Default Constructor called"<< std::endl;
}

FragTrap::FragTrap( std::string Name ){
	this->Hit_points = 100;
	this->Energy_points = 100;
	this->Attack_damage = 30;
	this->Name = Name;
	std::cout << "FragTrap constructor called"<< std::endl;
}

FragTrap::~FragTrap( void ){
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &object){
	std::cout << "FragTrap Copy constructor called"<< std::endl;
	*this = object;
}

FragTrap& FragTrap::operator=(const FragTrap& object){
	this->Name = object.Name;
	this->Attack_damage = object.Attack_damage;
	this->Energy_points = object.Energy_points;
	this->Hit_points = object.Hit_points;
	return *this;
}

void FragTrap::highFivesGuys( void ){
	if(this->Hit_points  < 1){
		std::cout << "FragTrap " << this->Name << " is already Dead" << std::endl;
		return ;
	}
	if(this->Energy_points < 1){
		std::cout << "FragTrap " << this->Name << " does not have enough energy" << std::endl;
		return ;
	}
    std::cout << "Give me your hand, let's goooooo" << std::endl;
}
