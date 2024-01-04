/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 16:59:57 by ohachami          #+#    #+#             */
/*   Updated: 2024/01/04 17:08:07 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
#include "AForm.hpp"

class Form;
class ShrubberyCreationForm : public AForm{
	public:
		ShrubberyCreationForm( void );
		~ShrubberyCreationForm( void );
		ShrubberyCreationForm( std::string Name, int Grade );
		ShrubberyCreationForm(const ShrubberyCreationForm& object);
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat& object);

#endif