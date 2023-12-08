/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 22:16:16 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/08 08:27:54 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie z;
    
    z.randomChump("daed");
    z.announce();
    //z.newZombie("fixe");
    //z.announce();
    //delete [] z;
}
