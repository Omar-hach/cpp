/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 11:58:36 by ohachami          #+#    #+#             */
/*   Updated: 2024/01/09 06:29:33 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	try{
		Bureaucrat Hamada("Hamada", 140);
		ShrubberyCreationForm A4("paul");
		PresidentialPardonForm A3("loller");

		std::cout << Hamada << std::endl;
		std::cout << A4 << std::endl;
		Hamada.signForm(A4);
		Hamada.executeForm(A4);
		Hamada.executeForm(A4);
		Hamada.executeForm(A4);
		std::cout << A4 << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
