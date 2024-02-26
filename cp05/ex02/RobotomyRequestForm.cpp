/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 16:59:50 by ohachami          #+#    #+#             */
/*   Updated: 2024/02/24 00:02:31 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm( void ){
    this->Target = "Roboto my Request Form";
    this->setGradeSign(72);
    this->setGradeExecute(45);
    std::cout << "RobotomyRequestForm " << this << std::endl;
	//std::cout << "Constructor RobotomyRequestForm called"<< std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( std::string Target ){
	this->Target = Target;
    this->setGradeSign(72);
    this->setGradeExecute(45);
    //std::cout << "Constructor RobotomyRequestForm called"<< std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm( void ){
    //std::cout << "Deconstructor RobotomyRequestForm called"<< std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& object){
    //std::cout << "Copy Constructor RobotomyRequestForm called"<< std::endl;
	*this = object;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& object){
    this->setSigne(object.isitSigned());
    this->setName(object.getName());
	this->Target = object.Target;
	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const{
    
    if(this->isitSigned() && this->getGradeExecute() >= executor.getGrade()){
		std::cout << "GRRRR GRRRR ";
        srand(time(NULL));
        if (rand() % 2)
            std::cout <<  "Congartulation " << Target <<" have seccefully turn into a cyborg" << std::endl;
        else
            std::cout << " Oh NO!! the robotoming has failed, and " << Target <<" is dead now, don't worry he still can do his work as a ghost" << std::endl;
    }
	else{
		throw (FormNotExecuted());
	}
}