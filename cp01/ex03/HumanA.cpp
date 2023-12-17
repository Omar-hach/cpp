/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:54:17 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/17 17:11:54 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

std::string HumanA::getName( void ){
    return this->name;
}

void HumanA::setName( std::string name ){
    this->name = name;
}

void HumanA::attack(void){
    std::cout << getName() << " attacks with their " << killer.getType() << std::endl;
}

void HumanA::setWeapon(Weapon& killer){
    this->killer = killer;
}

HumanA::HumanA(std::string name, Weapon killer){
    setWeapon(killer);
    setName(name);
    std::cout << "HumanA object " << this->name << " created with " << this->killer.getType() << std::endl;
}

HumanA::~HumanA(){
    std::cout << "HumanA object " << this->name << " destroyed"<< std::endl;
}
