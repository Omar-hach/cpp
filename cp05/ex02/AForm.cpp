/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:00:05 by ohachami          #+#    #+#             */
/*   Updated: 2024/01/04 17:44:52 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm( void ){
	this->Name = "A Form";
	this->isSigned = 0;
	this->GradeExecute = 150;
	this->GradeSign = 150;
	std::cout << "Constructor called"<< std::endl;
}

AForm::~AForm( void ){
	std::cout << "Deconstructor called"<< std::endl;
}

AForm::AForm( std::string Name, bool isSigned, int GradeExecute, int GradeSign ){
	if(GradeExecute > 150 || GradeSign > 150)
		throw(GradeTooLowException());
	else if(GradeExecute < 1 || GradeSign < 1)
		throw(GradeTooHighException());
	this->Name = Name;
	this->isSigned = isSigned;
	this->GradeExecute = GradeExecute;
	this->GradeSign = GradeSign;
	std::cout << "Constructor called"<< std::endl;
}

AForm::AForm(const AForm& object){
	std::cout << "Copy Constructor called"<< std::endl;
	*this = object;
}

void AForm::beSigned( Bureaucrat& slave){
	slave.signForm( *this );
	if(slave.getGrade() <= this->GradeSign){
		this->isSigned = 1;
	}
	else
		throw (GradeTooLowException());
}

std::string AForm::getName( void ) const{
	return this->Name;
}

bool AForm::isitSigned( void ) const{
	return this->isSigned;
}

int AForm::getGradeExecute( void ) const{
	return this->GradeExecute;
}

int AForm::getGradeSign( void ) const{
	return this->GradeSign;
}

std::ostream &operator<<(std::ostream &out, const AForm& object){
	out << "This " << object.getName() << " required a Bureaucrat of Grade " << object.getGradeSign()
	<< " to sign it and of Grade " << object.getGradeExecute()
	<< " to execute it , it current status is ";
	if(object.isitSigned())
		out << "signed";
	else
		out << "not signed";
	return out;
}


AForm& AForm::operator=(const AForm& object){
	this->Name = object.Name;
	this->isSigned = object.isSigned;
	this->GradeExecute = object.GradeExecute;
	this->GradeSign = object.GradeSign;
	return *this;
}
