/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 04:32:59 by ohachami          #+#    #+#             */
/*   Updated: 2024/02/26 22:22:38 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    Serializer sc;
    uintptr_t num;
    uintptr_t num2;
    Data *ptr;
    num = 14;
    std::cout << num << std::endl;
    ptr = sc.deserialize(num);
    std::cout << ptr << std::endl;
    num2 = sc.serialize(ptr);
    std::cout << num2 << std::endl;
}
