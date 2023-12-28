/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 08:17:52 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/28 15:35:35 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include"Animal.hpp"

class Cat : public Animal{
	public:
		Cat( void );
		~Cat( void );
		Cat(const Cat& object);
		Cat& operator=(const Cat& object);
		void makeSound( void );
};

#endif