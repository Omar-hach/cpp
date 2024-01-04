/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 08:18:00 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/31 15:52:55 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Cat* i = new Cat();

    meta->makeSound();
    std::cout << j->getType() << " " << std::endl;
    j->makeSound();
    std::cout << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();

    delete i;
    delete j;
    delete meta;

    std::cout << "---------------------------" << std::endl;
    WrongAnimal* elephan = new WrongAnimal();
    WrongAnimal* lion = new WrongCat();
    std::cout << elephan->getType() << " " << std::endl;
    lion->makeSound();
    elephan->makeSound();

    delete elephan;
    delete lion;
    return 0;
}