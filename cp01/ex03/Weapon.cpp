/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:54:46 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/17 19:40:44 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Weapon.hpp"

std::string Weapon::getType( void ){
    return this->type;
}

void Weapon::setType( std::string type ){
    this->type = type;
}

Weapon::Weapon(std::string type) {
    setType(type);
}

Weapon::Weapon(void){
    if(this->type.length() == 0)
        std::cout << "object (null) created"<< std::endl;
    else
        std::cout << "object " << this->type << " created"<< std::endl;
}

Weapon::~Weapon(void){
    if(this->type.length() == 0)
        std::cout << "object (null) created"<< std::endl;
    else
        std::cout << "object " << this->type << " created"<< std::endl;
}
