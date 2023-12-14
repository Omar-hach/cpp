/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:54:29 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/13 17:52:49 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include<iostream>
# include"Weapon.hpp"

class HumanB{
	private:
		std::string name;
        Weapon killer;
	public:
		HumanB(std::string name);
		~HumanB(void);
		std::string getName( void);
		void setName( std::string name );
        void attack(void);
        void setWeapon(Weapon& killer);
};
#endif