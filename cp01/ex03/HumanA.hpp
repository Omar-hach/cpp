/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarino <omarino@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:54:20 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/18 19:38:16 by omarino          ###   ########.fr       */
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