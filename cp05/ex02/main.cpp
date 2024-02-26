/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 11:58:36 by ohachami          #+#    #+#             */
/*   Updated: 2024/02/24 00:06:16 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	Bureaucrat Hamada("Hamada", 4);
	ShrubberyCreationForm A4("file");
	PresidentialPardonForm A3("maskin");
	RobotomyRequestForm A5("kuma");
	std::cout << "--------Shrubbery Creation Form------------" << std::endl;
	try{
		std::cout << Hamada << std::endl;
		Hamada.signForm(A4);
		Hamada.executeForm(A4);
		std::cout << A4 << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "--------Presidential Pardon Form------------" << std::endl;
	try{
		std::cout << Hamada << std::endl;
		Hamada.signForm(A3);
		Hamada.executeForm(A3);
		std::cout << A3 << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "--------Robotomy Request Form------------" << std::endl;
	try{
		std::cout << Hamada << std::endl;
		std::cout << A5 << std::endl;
		Hamada.signForm(A5);
		Hamada.executeForm(A5);
		std::cout << A5 << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
