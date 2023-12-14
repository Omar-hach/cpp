/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:54:46 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/13 17:28:53 by ohachami         ###   ########.fr       */
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
