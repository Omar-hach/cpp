/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 07:51:45 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/26 07:56:31 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ){
	this->Hit_points = 100;
	this->Energy_points = 100;
	this->Attack_damage = 30;
	this->Name = "";
	std::cout << "FragTrap Constructor called"<< std::endl;
}

FragTrap::FragTrap( std::string Name ){
	this->Hit_points = 100;
	this->Energy_points = 100;
	this->Attack_damage = 30;
	this->Name = Name;
	std::cout << "FragTrap Default constructor called"<< std::endl;
}

FragTrap::~FragTrap( void ){
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &object){
	std::cout << "FragTrap Copy constructor called"<< std::endl;
	*this = object;
}


FragTrap& FragTrap::operator=(FragTrap const& object){
	this->Name = object.Name;
	this->Attack_damage = object.Attack_damage;
	this->Energy_points = object.Energy_points;
	this->Attack_damage = object.Attack_damage;
	return *this;
}

void FragTrap::highFivesGuys( void ){
    std::cout << "Give me your hand, let's goooooo" << std::endl;
}
