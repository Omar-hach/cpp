/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 16:59:28 by ohachami          #+#    #+#             */
/*   Updated: 2024/02/23 23:25:23 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
#include "AForm.hpp"
#include <cstdlib>

class PresidentialPardonForm : public AForm{
	private:
		std::string Target;
	public:
		PresidentialPardonForm( void );
		~PresidentialPardonForm( void );
		PresidentialPardonForm( std::string Target );
		PresidentialPardonForm(const PresidentialPardonForm& object);
		void execute(const Bureaucrat& executor) const;
		PresidentialPardonForm& operator=(const PresidentialPardonForm& object);
};

#endif