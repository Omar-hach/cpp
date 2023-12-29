/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 08:17:47 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/29 17:10:11 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include"Brain.hpp"

class Animal{
	protected:
		std::string type;
	public:
		Animal( void );
		virtual ~Animal( void );
		Animal(const Animal& object);
		Animal& operator=(const Animal& object);
		std::string getType( void) const;
		virtual void makeSound( void ) const;
};

#endif