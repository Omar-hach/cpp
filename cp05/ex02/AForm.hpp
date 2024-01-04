/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:00:03 by ohachami          #+#    #+#             */
/*   Updated: 2024/01/04 17:45:41 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP
# include<iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;
class AForm{
	private:
		std::string Name;
		bool isSigned;
		int GradeSign;
		int GradeExecute;
	public:
		AForm( void );
		virtual ~AForm( void );
		AForm( std::string Name, bool isSigned, int GradeExecute, int GradeSign );
		AForm(const AForm& object);
		AForm& operator=( const AForm& object );
		void beSigned( Bureaucrat& slave );
		bool isitSigned( void ) const;
		std::string getName( void ) const;
		int getGradeSign( void ) const;
		int getGradeExecute( void ) const;
        void execute(Bureaucrat const & executor) const;
		class GradeTooHighException : public std::exception{
			public:
				const char *what() const throw(){
					return "too high";
				}
		};
		class GradeTooLowException : public std::exception{
			public:
				const char *what() const throw(){
					return "too low";
				}
		};
};

std::ostream &operator<<(std::ostream &out, const AForm& object);

#endif