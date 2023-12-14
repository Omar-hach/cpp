/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 22:16:43 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/12 18:05:01 by ohachami         ###   ########.fr       */
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
		void announce( void );
		void set_name(std::string name);
		std::string get_name(void);
};

Zombie*	newZombie( std::string name );
void randomChump( std::string name );

#endif
