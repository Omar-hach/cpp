/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 22:16:16 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/12 16:07:16 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zombie_army;
    int N = 3;

    zombie_army = zombieHorde(N, "boo");
    for(int i = 0; i < N; i++)
        zombie_army[i].announce();
    delete [] zombie_army;
    system("leaks $(ps | grep Zombie | awk '{if (NR==1) print$1}')");
}
