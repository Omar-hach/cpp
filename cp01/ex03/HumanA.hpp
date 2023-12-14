/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:54:20 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/13 17:56:29 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include<iostream>
# include"Weapon.hpp"

class HumanA{
	private:
		std::string name;
        Weapon killer;
	public:
		HumanA(std::string name, Weapon killer);
		~HumanA(void);
		std::string getName( void );
		void setName( std::string name );
        void attack(void);
        void setWeapon(Weapon& killer);
};
#endif