/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:00:03 by ohachami          #+#    #+#             */
/*   Updated: 2024/01/09 06:22:52 by ohachami         ###   ########.fr       */
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
		void setGradeSign( int GradeSign );
		void setGradeExecute( int GradeExecute );
		void setSigne( bool Sign );
		void setName( std::string Name );
        virtual void execute(const Bureaucrat& executor) const = 0;
		class FormNotExecuted : public std::exception{
			public:
				const char *what() const throw();
		};
		class GradeTooHighException : public std::exception{
			public:
				const char *what() const throw();
		};
		class GradeTooLowException : public std::exception{
			public:
				const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &out, const AForm& object);

#endif