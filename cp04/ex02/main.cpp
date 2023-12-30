/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 08:18:00 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/30 15:45:29 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* j = new Dog();
    const Cat* i = new Cat();
    const Animal* k(i);
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout <<"k = " <<  k->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();

    std::cout << "---------------------------" << std::endl;

    WrongAnimal* kata = new WrongCat();
    std::cout << kata->getType() << " " << std::endl;
    kata->makeSound();

    delete i;
    delete j;
    delete k;
    delete kata;
    return 0;
}
