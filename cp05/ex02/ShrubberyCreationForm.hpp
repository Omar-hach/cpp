/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 16:59:57 by ohachami          #+#    #+#             */
/*   Updated: 2024/02/23 23:25:13 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
#include "AForm.hpp"
#include<fstream>

class ShrubberyCreationForm : public AForm{
	private:
		std::string Target;
	public:
		ShrubberyCreationForm( void );
		~ShrubberyCreationForm( void );
		ShrubberyCreationForm( std::string Target );
		ShrubberyCreationForm(const ShrubberyCreationForm& object);
		void execute(const Bureaucrat& executor) const;
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& object);
};

#endif