/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:54:51 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/19 22:06:21 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include<iostream>

class Weapon{
	private:
		std::string type;
	public:
		Weapon(std::string type);
		Weapon(void);
		~Weapon(void);
		const std::string& getType( void ) const;
		void setType( std::string name );
};
#endif
