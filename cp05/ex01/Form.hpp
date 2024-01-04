/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 11:59:17 by ohachami          #+#    #+#             */
/*   Updated: 2024/01/04 16:53:58 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"

class Bureaucrat;
class Form{
	private:
		std::string Name;
		bool isSigned;
		int GradeSign;
		int GradeExecute;
	public:
		Form( void );
		~Form( void );
		Form( std::string Name, bool isSigned, int GradeExecute, int GradeSign );
		Form(const Form& object);
		Form& operator=( const Form& object );
		void beSigned( Bureaucrat& slave );
		bool isitSigned( void ) const;
		std::string getName( void ) const;
		int getGradeSign( void ) const;
		int getGradeExecute( void ) const;
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

std::ostream &operator<<(std::ostream &out, const Form& object);

#endif
