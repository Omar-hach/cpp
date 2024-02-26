/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 16:59:52 by ohachami          #+#    #+#             */
/*   Updated: 2024/02/23 23:24:55 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "AForm.hpp"
# include <cstdlib>

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