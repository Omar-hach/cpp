/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 22:16:43 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/04 22:16:45 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include<iostream>
class Zombie{
	private:

	public:
		Zombie(void);
		~Zombie(void);
		Zombie* newZombie( std::string name );
		void randomChump( std::string name );
		void announce( void );
};
#endif
