/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 09:40:43 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/29 18:15:23 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ){
	this->Hit_points = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
	this->Name = "";
	std::cout << "ScavTrap Constructor called"<< std::endl;
}

ScavTrap::ScavTrap( std::string Name ){
	this->Hit_points = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
	this->Name = Name;
	std::cout << "ScavTrap Default constructor called"<< std::endl;
}

ScavTrap::~ScavTrap( void ){
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &object){
	std::cout << "ScavTrap Copy constructor called"<< std::endl;
	*this = object;
}


ScavTrap& ScavTrap::operator=(const ScavTrap& object){
	this->Name = object.Name;
	this->Attack_damage = object.Attack_damage;
	this->Energy_points = object.Energy_points;
	this->Hit_points = object.Hit_points;
	return *this;
}

void ScavTrap::attack(const std::string& target){
	if(this->Hit_points  < 1){
		std::cout << "ScavTrap " << this->Name << " is already Dead" << std::endl;
		return ;
	}
	if(this->Energy_points < 1){
		std::cout << "ScavTrap " << this->Name << " does not have enough energy" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->Name << " attacks " << target
	<< ", causing " << this->Attack_damage << " points of damage!"<< std::endl;
	this->Energy_points--;
}

void ScavTrap::guardGate( void ){
    std::cout << "ScavTrap is garding the Gate" << std::endl;
}
