/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 11:58:30 by ohachami          #+#    #+#             */
/*   Updated: 2024/01/09 01:13:51 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ){
	this->Name = "A Bureaucrat";
	this->Grade = 150;
	std::cout << "Constructor called"<< std::endl;
}

Bureaucrat::~Bureaucrat( void ){
	std::cout << "Deconstructor called"<< std::endl;
}

Bureaucrat::Bureaucrat( std::string Name, int Grade){
	if (Grade < 1)
		throw (GradeTooHighException());
	else if (Grade > 150)
		throw (GradeTooLowException());
	std::cout << "Constructor called"<< std::endl;
	this->Name = Name;
	this->Grade = Grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& object){
	std::cout << "Copy Constructor called"<< std::endl;
	*this = object;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& object){
	this->Name = object.Name;
	this->Grade = object.Grade;
	return *this;
}

void Bureaucrat::BureaucratIncrease( void ){
	if(this->Grade <= 150 && this->Grade > 1)
		this->Grade--;
	else
		throw (GradeTooHighException());
}

void Bureaucrat::BureaucratDecrease( void ){
	if(this->Grade >= 1 && this->Grade < 150)
		this->Grade++;
	else{
		throw (GradeTooLowException());
	}
}

void Bureaucrat::signForm( Form& paper )
{
	if(this->Grade <= paper.getGradeSign())
		std::cout << this->Name << " signed " << paper.getName() << std::endl;
	else
		std::cout << this->Name << " couldn't sign " << paper.getName()
		<< " because his grade is too low" << std::endl;
	paper.beSigned(*this);
}

std::string Bureaucrat::getName( void ) const{
	return this->Name;
}

int Bureaucrat::getGrade( void ) const{
	return this->Grade;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "The Grade is Too High";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "The Grade is Too Low";
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat& object){
	out << object.getName() <<", bureaucrat grade " << object.getGrade();
	return out;
}


