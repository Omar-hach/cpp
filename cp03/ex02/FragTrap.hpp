/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 07:51:47 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/31 10:33:25 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include"ClapTrap.hpp"

class FragTrap : public ClapTrap{
	public:
		FragTrap( void );
		~FragTrap( void );
		FragTrap(const FragTrap &object);
		FragTrap& operator=(const FragTrap& object);
		FragTrap( std::string Name );
        void highFivesGuys();
};

#endif  