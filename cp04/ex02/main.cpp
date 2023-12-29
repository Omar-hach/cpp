/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 08:18:00 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/29 15:57:45 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal** meta = new const Animal*[10];
	for (int k = 0 ; k < 5 ; k++)
		meta[k] = new Cat();
	for (int k = 5 ; k < 10 ; k++)
		meta[k] = new Dog();
	for (int k = 0 ; k < 10 ; k++)
		meta[k]->makeSound();
	for (int k = 0 ; k < 10 ; k++)
		delete meta[k];
	delete[] meta;
	return 0;
}
