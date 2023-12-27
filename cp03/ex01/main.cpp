/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 22:16:16 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/26 07:38:35 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void ) {
	ClapTrap player("player");
	ScavTrap enemy("enemy");

	player.attack("enemy");
	enemy.takeDamage(50);
	player.beRepaired(3);
	enemy.beRepaired(3);
	enemy.attack("enemy");
	player.takeDamage(50);
	player.beRepaired(3);
	enemy.guardGate();
	return 0;
}
