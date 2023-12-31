/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 09:40:45 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/31 10:32:06 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include"ClapTrap.hpp"

class ScavTrap : public ClapTrap{
	public:
		ScavTrap( void );
		~ScavTrap( void );
		ScavTrap(const ScavTrap &object);
		ScavTrap& operator=(const ScavTrap& object);
		ScavTrap( std::string Name );
		void attack(const std::string& target);
        void guardGate();
};

#endif   