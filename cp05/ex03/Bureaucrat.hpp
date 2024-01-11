/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 11:58:33 by ohachami          #+#    #+#             */
/*   Updated: 2024/01/11 03:16:30 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include<iostream>
#include "AForm.hpp"

class AForm;
class Bureaucrat{
	private:
		std::string Name;
		int Grade;
	public:
		Bureaucrat( void );
		~Bureaucrat( void );
		Bureaucrat( std::string Name, int Grade );
		Bureaucrat(const Bureaucrat& object);
		void BureaucratIncrease( void );
		void BureaucratDecrease( void );
		Bureaucrat& operator=(const Bureaucrat& object);
		void signForm( AForm& paper );
		void executeForm(const AForm& form);
		std::string getName( void ) const;
		int getGrade( void ) const;
		class GradeTooHighException : public std::exception{
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception{
			public:
				const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat& object);

#endif