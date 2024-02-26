/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 22:16:16 by ohachami          #+#    #+#             */
/*   Updated: 2024/01/21 13:24:54 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void ) {
	ClapTrap player("player");
	ScavTrap enemy("enemy");

	player.attack("enemy");
	enemy.takeDamage(10);
	enemy.takeDamage(20);
	player.beRepaired(3);
	enemy.beRepaired(3);
	enemy.attack("player");
	player.takeDamage(50);
	player.beRepaired(3);
	enemy.guardGate();
	enemy.takeDamage(100);
	enemy.guardGate();
	std::cout << enemy.Name << std::endl;
	return 0;
}
