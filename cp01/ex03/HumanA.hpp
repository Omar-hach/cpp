/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:54:20 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/24 03:11:10 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include"Weapon.hpp"

class HumanA{
	private:
		std::string name;
		Weapon &killer;
	public:
		HumanA(std::string name, Weapon &killer);
		~HumanA(void);
		std::string getName( void );
		void setName( std::string name );
		void attack(void);
		void setWeapon(Weapon& killer);
};
#endif