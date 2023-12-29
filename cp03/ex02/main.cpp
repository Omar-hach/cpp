/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 22:16:16 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/29 15:34:58 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int main( void ) {
	ClapTrap player("player");
	FragTrap enemy("enemy");

	player.attack("enemy");
	enemy.takeDamage(50);
	player.beRepaired(3);
	enemy.beRepaired(3);
	enemy.attack("player");
	player.takeDamage(50);
	player.beRepaired(3);
	enemy.highFivesGuys();
	return 0;
}
