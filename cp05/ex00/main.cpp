/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 11:58:36 by ohachami          #+#    #+#             */
/*   Updated: 2024/01/09 00:28:21 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try{
        Bureaucrat Hamada("Hamada", 2);
        Bureaucrat yassir;

        std::cout << Hamada << std::endl;
        Hamada.BureaucratIncrease();
        yassir = Hamada;
        Hamada.BureaucratIncrease();
        Hamada.BureaucratIncrease();
        Hamada.BureaucratIncrease();
        std::cout << Hamada << std::endl;
        Hamada.BureaucratDecrease();
        std::cout << Hamada << std::endl;
        std::cout << yassir << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << "something wrong!!! : " << e.what() << std::endl;
    }
}
