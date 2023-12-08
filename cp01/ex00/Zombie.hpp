/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 22:16:43 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/08 08:21:47 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include<iostream>

class Zombie{
	private:
		std::string name;
	public:
		Zombie(void);
		~Zombie(void);
		Zombie* newZombie( std::string name );
		void randomChump( std::string name );
		void announce( void );
		void name_Zombie(std::string name);
};
#endif
