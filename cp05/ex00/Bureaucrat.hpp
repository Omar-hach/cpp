/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 11:58:33 by ohachami          #+#    #+#             */
/*   Updated: 2024/01/03 19:08:22 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include<iostream>

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
		std::string getName( void ) const;
		int getGrade( void ) const;
		class GradeTooHighException : public std::exception{
			public:
				const char* what() const throw() {
					return "The Grade is Too High";
				}
		};
		class GradeTooLowException : public std::exception{
			public:
				const char* what() const throw() {
					return "The Grade is Too Low";
				}
			
		};
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat& object);

#endif