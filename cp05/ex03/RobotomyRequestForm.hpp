/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 16:59:52 by ohachami          #+#    #+#             */
/*   Updated: 2024/01/08 05:37:42 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
#include "AForm.hpp"

class RobotomyRequestForm : public AForm{
	private:
		std::string Target;
	public:
		RobotomyRequestForm( void );
		~RobotomyRequestForm( void );
		RobotomyRequestForm( std::string Target );
		RobotomyRequestForm(const RobotomyRequestForm& object);
		void execute(const Bureaucrat& executor) const;
		RobotomyRequestForm& operator=(const RobotomyRequestForm& object);
};

#endif