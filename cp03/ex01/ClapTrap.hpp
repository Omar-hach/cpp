/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 07:48:44 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/31 10:35:11 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include<iostream>

class ClapTrap{
	protected:
		std::string Name;
		unsigned int Hit_points;
		unsigned int Energy_points;
		unsigned int Attack_damage;
	public:
		ClapTrap( void );
		~ClapTrap( void );
		ClapTrap(const ClapTrap& object);
		ClapTrap& operator=(const ClapTrap& object);
		ClapTrap( std::string Name );
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif       