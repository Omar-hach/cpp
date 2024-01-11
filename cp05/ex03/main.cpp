/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 11:58:36 by ohachami          #+#    #+#             */
/*   Updated: 2024/01/11 04:28:52 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main()
{
	try{
		Bureaucrat Hamada("Hamada", 140);
		ShrubberyCreationForm A4("paul");
		//PresidentialPardonForm A3("loller");
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("robotomy Request", "Bender");
		std::cout << *rrf << std::endl;
		std::cout << Hamada << std::endl;
		std::cout << A4 << std::endl;
		Hamada.signForm(*rrf);
		Hamada.executeForm(*rrf);
		Hamada.executeForm(*rrf);
		std::cout << A4 << std::endl;
		delete rrf;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
