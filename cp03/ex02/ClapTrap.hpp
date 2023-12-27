/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 07:48:44 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/26 10:00:37 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include<iostream>

class ClapTrap{
	protected:
		std::string Name;
		int Hit_points;
		int Energy_points;
		int Attack_damage;
	public:
		ClapTrap( void );
		ClapTrap( std::string Name );
		~ClapTrap( void );
		ClapTrap(const ClapTrap &object);
		ClapTrap& operator=(ClapTrap const& object);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif       