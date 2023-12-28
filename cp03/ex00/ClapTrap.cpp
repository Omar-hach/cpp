/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 07:48:18 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/27 11:09:07 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap( std::string Name ){
	this->Hit_points = 10;
	this->Energy_points = 10;
	this->Attack_damage = 0;
	this->Name = Name;
	std::cout << "Constructor called"<< std::endl;
}

ClapTrap::ClapTrap( void )
{
	this->Hit_points = 10;
	this->Energy_points = 10;
	this->Attack_damage = 0;
	this->Name = "";
	std::cout << "Default constructor called"<< std::endl;
}

ClapTrap::~ClapTrap( void ){
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &object){
	std::cout << "Copy constructor called"<< std::endl;
	*this = object;
}


ClapTrap& ClapTrap::operator=(ClapTrap& const object){
	this->Name = object.Name;
	this->Attack_damage = object.Attack_damage;
	this->Energy_points = object.Energy_points;
	this->Hit_points = object.Hit_points;
	return *this;
}

void ClapTrap::attack(const std::string& target){
	if(this->Energy_points < 1){
		std::cout << "ClapTrap " << this->Name << " does not have enough energy" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->Name << " attacks " << target
	<< ", causing " << this->Attack_damage << " points of damage!"<< std::endl;
	this->Energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount){
	std::cout << "ClapTrap " << this->Name << " has taken " << amount << " damage points" << std::endl;
	if(this->Hit_points < (int)amount){
		std::cout << "ClapTrap " << this->Name << " has been destroyed" << std::endl;
		this->Hit_points = 0;
		return ;
	}
	if(this->Hit_points  < 1){
		std::cout << "ClapTrap " << this->Name << " is already Dead" << std::endl;
		return ;
	}
	this->Hit_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount){
	if(this->Energy_points < 1){
		std::cout << "ClapTrap " << this->Name << " does not have enough energy" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->Name << " is repaired and gained " << amount << " point" << std::endl;
	if(this->Hit_points + amount <= 10)
		this->Hit_points += amount;
	else{
		std::cout << "ClapTrap " << this->Name << " is fully repaired" << std::endl;
		this->Hit_points = 10;
	}
	this->Energy_points--;
}
