/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 08:18:00 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/29 12:11:53 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    std::cout << "---------------------------" << std::endl;
    WrongAnimal* elephan = new WrongAnimal();
    WrongAnimal* kata = new WrongCat();
    std::cout << elephan->getType() << " " << std::endl;
    kata->makeSound();
    elephan->makeSound();

    delete meta;
    delete i;
    delete j;
    delete elephan;
    delete kata;
    return 0;
}