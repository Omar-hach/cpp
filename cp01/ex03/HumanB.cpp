/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:54:25 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/24 03:09:34 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

std::string HumanB::getName( void ){
    return this->name;
}

void HumanB::setName( std::string name ){
    this->name = name;
}

void HumanB::attack(void){
    std::cout << getName() << " attacks with their " << killer->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &killer){
    this->killer = &killer;
}

HumanB::HumanB(std::string name){
    killer = NULL;
    setName(name);
}

HumanB::~HumanB(){
}