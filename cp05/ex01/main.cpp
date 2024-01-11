/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 11:58:36 by ohachami          #+#    #+#             */
/*   Updated: 2024/01/09 01:20:05 by ohachami         ###   ########.fr       */
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
		Hamada.signForm(A4);
		std::cout << A4 << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "something wrong!!! : " << e.what() << std::endl;
	}
}