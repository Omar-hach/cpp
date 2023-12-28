/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 08:17:57 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/28 15:33:35 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include"Animal.hpp"

class Dog : public Animal{
	public:
		Dog( void );
		~Dog( void );
		Dog(const Dog& object);
		Dog& operator=(const Dog& object);
		void makeSound( void );
};

#endif
