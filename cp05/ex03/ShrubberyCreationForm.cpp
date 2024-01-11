/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 16:59:54 by ohachami          #+#    #+#             */
/*   Updated: 2024/01/09 06:30:34 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include<fstream>

ShrubberyCreationForm::ShrubberyCreationForm( void ){
    this->Target = "Shrubbery Creation Form";
    this->setGradeSign(145);
    this->setGradeExecute(137);
    std::cout << "ShrubberyCreationForm " << this << std::endl;
	std::cout << "Constructor ShrubberyCreationForm called"<< std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string Target ){
	this->Target = Target;
    this->setGradeSign(145);
    this->setGradeExecute(137);
    std::cout << "Constructor ShrubberyCreationForm called"<< std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ){
    std::cout << "Deconstructor ShrubberyCreationForm called"<< std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& object){
    std::cout << "Copy Constructor ShrubberyCreationForm called"<< std::endl;
	*this = object;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& object){
    this->setSigne(object.isitSigned());
    this->setName(object.getName());
	this->Target = object.Target;
	return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const{
    std::ofstream outfile;

    if(this->isitSigned() && this->getGradeExecute() >= executor.getGrade()){
        outfile.open(this->Target + "_shrubbery");
        outfile <<"      ccee88oo                   ccee88oo"<< std::endl;
        outfile <<"  C8O8O8Q8PoOb o8oo          C8O8O8Q8PoOb o8oo"<< std::endl;
        outfile <<" dOB69QO8PdUOpugoO9bD       dOB69QO8PdUOpugoO9bD"<< std::endl;
        outfile <<"CgggbU8OU qOp qOdoUOdcb    CgggbU8OU qOp qOdoUOdcb"<< std::endl;
        outfile <<"    6OuU  /p u gcoUodpP        6OuU  /p u gcoUodpP"<< std::endl;
        outfile <<"      \\\\\\//  /douUP              \\\\\\//  /douUP"<< std::endl;
        outfile <<"        \\\\\\////                    \\\\\\////"<< std::endl;
        outfile <<"         |||/\\                      |||/\\"<< std::endl;
        outfile <<"         |||\\/                      |||\\/"<< std::endl;
        outfile <<"         |||||                      |||||"<< std::endl;
        outfile <<"   .....//||||\\\\....          .....//||||\\\\...."<< std::endl;
        outfile <<""<< std::endl;
        outfile <<"          ccee88oo"<< std::endl;
        outfile <<"      C8O8O8Q8PoOb o8oo"<< std::endl;
        outfile <<"     dOB69QO8PdUOpugoO9bD"<< std::endl;
        outfile <<"    CgggbU8OU qOp qOdoUOdcb"<< std::endl;
        outfile <<"        6OuU  /p u gcoUodpP"<< std::endl;
        outfile <<"          \\\\\\//  /douUP"<< std::endl;
        outfile <<"            \\\\\\////"<< std::endl;
        outfile <<"             |||/\\"<< std::endl;
        outfile <<"             |||\\/"<< std::endl;
        outfile <<"             |||||"<< std::endl;
        outfile <<"       .....//||||\\\\...."<< std::endl;
        outfile <<"                                 ccee88oo"<< std::endl;
        outfile <<"                             C8O8O8Q8PoOb o8oo"<< std::endl;
        outfile <<"                            dOB69QO8PdUOpugoO9bD"<< std::endl;
        outfile <<"                           CgggbU8OU qOp qOdoUOdcb"<< std::endl;
        outfile <<"                               6OuU  /p u gcoUodpP"<< std::endl;
        outfile <<"                                 \\\\\\//  /douUP"<< std::endl;
        outfile <<"                                   \\\\\\////"<< std::endl;
        outfile <<"                                    |||/\\"<< std::endl;
        outfile <<"                                    |||\\/"<< std::endl;
        outfile <<"                                    |||||"<< std::endl;
        outfile <<"                              .....//||||\\\\...."<< std::endl;
    }
	else{
		throw (FormNotExecuted());
	}
}