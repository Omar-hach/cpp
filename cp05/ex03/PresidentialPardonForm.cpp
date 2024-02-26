/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 16:59:21 by ohachami          #+#    #+#             */
/*   Updated: 2024/02/23 05:22:12 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ){
    this->Target = "A Presidential Pardon Form";
    this->setGradeSign(25);
    this->setGradeExecute(5);
    std::cout << "PresidentialPardonForm " << this << std::endl;
	//std::cout << "Constructor PresidentialPardonForm called"<< std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( std::string Target ){
	this->Target = Target;
    this->setGradeSign(25);
    this->setGradeExecute(5);
    //std::cout << "Constructor PresidentialPardonForm called"<< std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm( void ){
    //std::cout << "Deconstructor PresidentialPardonForm called"<< std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& object){
    //std::cout << "Copy Constructor PresidentialPardonForm called"<< std::endl;
	*this = object;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& object){
    this->setSigne(object.isitSigned());
    this->setName(object.getName());
	this->Target = object.Target;
	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const{
    if(this->isitSigned() && this->getGradeExecute() >= executor.getGrade())
		std::cout << "Informs that "<< this->Target <<" has been pardoned by Zaphod Beeblebrox." << std::endl;
	else{
		throw (FormNotExecuted());
	}
}
