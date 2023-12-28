/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 08:12:17 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/28 12:26:24 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include<iostream>

class WrongAnimal{
	protected:
		std::string type;
	public:
		WrongAnimal( void );
		~WrongAnimal( void );
		WrongAnimal(const WrongAnimal& object);
		WrongAnimal& operator=(const WrongAnimal& object);
		std::string getType( void) const;
		void makeSound( void );
};

#endif