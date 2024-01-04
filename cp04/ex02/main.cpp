/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 08:18:00 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/31 16:07:34 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* j = new Dog();
    const Cat* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    j->makeSound();
    std::cout << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();

    delete i;
    delete j;

    std::cout << "---------------------------" << std::endl;

    WrongAnimal* lion = new WrongCat();
    std::cout << lion->getType() << " " << std::endl;
    lion->makeSound();

    delete lion;
    return 0;
}
