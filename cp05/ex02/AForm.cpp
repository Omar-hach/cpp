/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:00:05 by ohachami          #+#    #+#             */
/*   Updated: 2024/02/23 05:21:05 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm( void ){
	this->Name = "A Form";
	this->isSigned = 0;
	this->GradeExecute = 150;
	this->GradeSign = 150;
	//std::cout << "Constructor AForm called"<< std::endl;
}

AForm::~AForm( void ){
	//std::cout << "Deconstructor AForm called"<< std::endl;
}

AForm::AForm( std::string Name, bool isSigned, int GradeExecute, int GradeSign ){
	//std::cout << "Constructor AForm called"<< std::endl;
	if(GradeExecute > 150 || GradeSign > 150)
		throw(GradeTooLowException());
	else if(GradeExecute < 1 || GradeSign < 1)
		throw(GradeTooHighException());
	this->Name = Name;
	this->isSigned = isSigned;
	this->GradeExecute = GradeExecute;
	this->GradeSign = GradeSign;
}

AForm::AForm(const AForm& object){
	//std::cout << "Copy Constructor AForm called"<< std::endl;
	*this = object;
}

void AForm::beSigned( Bureaucrat& slave){
	if(this->GradeSign >= slave.getGrade()){
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

void AForm::setGradeSign( int GradeSign ){
	this->GradeSign = GradeSign;	
}

void AForm::setGradeExecute( int GradeExecute ){
	this->GradeExecute = GradeExecute;	
}

void AForm::setSigne( bool Sign ){
	this->isSigned = Sign;
}

void AForm::setName( std::string Name ){
	this->Name = Name;
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

const char* AForm::GradeTooHighException::what() const throw() {
	return "The Grade is Too High for The Form";
}

const char* AForm::GradeTooLowException::what() const throw() {
	return "The Grade is Too Low for The Form";
}

const char* AForm::FormNotExecuted::what() const throw() {
	return "The Form has not been Executed";
}


AForm& AForm::operator=(const AForm& object){
	this->Name = object.Name;
	this->isSigned = object.isSigned;
	this->GradeExecute = object.GradeExecute;
	this->GradeSign = object.GradeSign;
	return *this;
}
