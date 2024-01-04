/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 16:59:52 by ohachami          #+#    #+#             */
/*   Updated: 2024/01/04 17:08:35 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
#include "AForm.hpp"

class Form;
class RobotomyRequestForm : public AForm{
	public:
		RobotomyRequestForm( void );
		~RobotomyRequestForm( void );
		RobotomyRequestForm( std::string Name, int Grade );
		RobotomyRequestForm(const RobotomyRequestForm& object);
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat& object);

#endif