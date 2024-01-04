/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 22:16:16 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/31 10:36:06 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void ) {
	ClapTrap player("player");
	ClapTrap enemy("enemy");
	
	player.attack("enemy");
	enemy.takeDamage(5);
	player.beRepaired(3);
	enemy.beRepaired(3);
	return 0;
}
