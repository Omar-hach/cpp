/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 11:58:36 by ohachami          #+#    #+#             */
/*   Updated: 2024/01/04 16:54:02 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main()
{
	try{
		Bureaucrat Hamada("Hamada", 50);
		Form A4("A4", 0, 20, 30);

		std::cout << Hamada << std::endl;
		Hamada.BureaucratIncrease();
		Hamada.BureaucratIncrease();
		Hamada.BureaucratIncrease();
		Hamada.BureaucratIncrease();
		std::cout << Hamada << std::endl;
		Hamada.BureaucratDecrease();
		std::cout << Hamada << std::endl;
		std::cout << A4 << std::endl;
		A4.beSigned(Hamada);
		std::cout << A4 << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
