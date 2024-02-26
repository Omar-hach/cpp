/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 23:07:57 by ohachami          #+#    #+#             */
/*   Updated: 2024/02/23 23:13:01 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
Intern::Intern( void ){
    //std::cout << "Constructor Intern called"<< std::endl;
}

Intern::~Intern( void ){
    //std::cout << "Deconstructor Intern called"<< std::endl;
}

Intern::Intern(const Intern& object){
    //std::cout << "Copy Constructor Intern called"<< std::endl;
	*this = object;
}

Intern& Intern::operator=(const Intern& object){
    (void)object;
    return *this;
}

const char* Intern::InternException::what() const throw() {
	return "Wrong Form Name";
}

AForm *Intern::makeForm(std::string FormName, std::string Target){
    std::string list[3] = {"Presidential Pardon", "Robotomy Request", "Shrubbery Creation"};
    AForm*    f[3] = {new PresidentialPardonForm(Target), new RobotomyRequestForm(Target), new ShrubberyCreationForm(Target)};
    int i = -1;
    while (++i < 3){
        if (FormName == list[i]) 
            break;
    }
    for (int j = 0; j < 3; j++){
        if (j != i)
            delete f[j];
    }
    if(i == 3){
        std::cout << "Intern couldn't creates " << FormName << " Named "  << Target
		<< " Because The Form Name is Wrong" << std::endl;
        throw (InternException());
        return (nullptr);
    }
    std::cout << "Intern creates "<< FormName << " Named "  << Target <<  std::endl;
    return (f[i]);
}
