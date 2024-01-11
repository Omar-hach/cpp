/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 23:07:59 by ohachami          #+#    #+#             */
/*   Updated: 2024/01/10 04:49:16 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern{
    public:
        Intern( void );
        ~Intern( void );
        Intern(const Intern& object);
        Intern& operator=(const Intern& object);
        AForm *makeForm(std::string Target, std::string FormName);
		class InternException : public std::exception{
			public:
				const char* what() const throw();
		};
};
#endif