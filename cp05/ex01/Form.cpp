/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 11:59:13 by ohachami          #+#    #+#             */
/*   Updated: 2024/02/23 05:19:28 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( void ){
	this->Name = "A Form";
	this->isSigned = 0;
	this->GradeExecute = 150;
	this->GradeSign = 150;
	//std::cout << "Constructor called"<< std::endl;
}

Form::~Form( void ){
	//std::cout << "Deconstructor called"<< std::endl;
}

Form::Form( std::string Name, bool isSigned, int GradeExecute, int GradeSign ){
	if(GradeExecute > 150 || GradeSign > 150)
		throw(GradeTooLowException());
	else if(GradeExecute < 1 || GradeSign < 1)
		throw(GradeTooHighException());
	this->Name = Name;
	this->isSigned = isSigned;
	this->GradeExecute = GradeExecute;
	this->GradeSign = GradeSign;
	//std::cout << "Constructor called"<< std::endl;
}

Form::Form(const Form& object){
	//std::cout << "Copy Constructor called"<< std::endl;
	*this = object;
}

Form& Form::operator=(const Form& object){
	this->Name = object.Name;
	this->isSigned = object.isSigned;
	this->GradeExecute = object.GradeExecute;
	this->GradeSign = object.GradeSign;
	return *this;
}

void Form::beSigned( Bureaucrat& slave){
	if(slave.getGrade() <= this->GradeSign)
		this->isSigned = 1;
	else
		throw (GradeTooLowException());
}

std::string Form::getName( void ) const{
	return this->Name;
}

bool Form::isitSigned( void ) const{
	return this->isSigned;
}

int Form::getGradeExecute( void ) const{
	return this->GradeExecute;
}

int Form::getGradeSign( void ) const{
	return this->GradeSign;
}

std::ostream &operator<<(std::ostream &out, const Form& object){
	out << "This " << object.getName() << " required a Bureaucrat of Grade " << object.getGradeSign()
	<< " to sign it and of Grade " << object.getGradeExecute()
	<< " to execute it , it current status is ";
	if(object.isitSigned())
		out << "signed";
	else
		out << "not signed";
	return out;
}

const char* Form::GradeTooHighException::what() const throw() {
	return "The Grade is Too High for The Form";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "The Grade is Too Low for The Form";
}


