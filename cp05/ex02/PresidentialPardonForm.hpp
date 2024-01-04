/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 16:59:28 by ohachami          #+#    #+#             */
/*   Updated: 2024/01/04 17:06:50 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
#include "AForm.hpp"

class Form;
class PresidentialPardonForm : public AForm{
	public:
		PresidentialPardonForm( void );
		~PresidentialPardonForm( void );
		PresidentialPardonForm( std::string Name, int Grade );
		PresidentialPardonForm(const PresidentialPardonForm& object);
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat& object);

#endif