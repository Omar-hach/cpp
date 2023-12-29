/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 08:12:22 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/29 12:55:04 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include"WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
	public:
		WrongCat( void );
		~WrongCat( void );
		WrongCat(const WrongCat& object);
		WrongCat& operator=(const WrongCat& object);
        void makeSound( void ) const;
};

#endif