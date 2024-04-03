/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 11:58:36 by ohachami          #+#    #+#             */
/*   Updated: 2024/03/30 18:21:31 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main()
{
	Bureaucrat Hamada("Hamada", 4);
	ShrubberyCreationForm A4("file");
	PresidentialPardonForm A3("maskin");
	RobotomyRequestForm A5("robot");
	Intern someRandomIntern;
	AForm* rrf;
	rrf = NULL;
	
	std::cout << "--------Shrubbery Creation Form------------" << std::endl;
	try{
		rrf = someRandomIntern.makeForm("Shrubbery Creation", "Bender");
		std::cout << *rrf << std::endl;
		Hamada.signForm(*rrf);
		Hamada.executeForm(*rrf);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	if(rrf)
		delete rrf;
	rrf = NULL;
	std::cout << "--------Presidential Pardon Form------------" << std::endl;
	try{
		rrf = someRandomIntern.makeForm("Presidential Pardon", "Bender");
		std::cout << *rrf << std::endl;
		Hamada.signForm(*rrf);
		Hamada.executeForm(*rrf);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	if(rrf)
		delete rrf;
	rrf = NULL;
	std::cout << "--------Robotomy Request Form------------" << std::endl;
	try{
		rrf = someRandomIntern.makeForm("Robotomy Request", "Bender");
		std::cout << *rrf << std::endl;
		Hamada.signForm(*rrf);
		Hamada.executeForm(*rrf);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	if(rrf)
		delete rrf;
}
