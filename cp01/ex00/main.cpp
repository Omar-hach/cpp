/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 22:16:16 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/17 16:59:28 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *Chemical_z;
	
	randomChump("nemesis");
	Chemical_z = newZombie("green monster");
	Chemical_z->announce();
	delete Chemical_z;
}
