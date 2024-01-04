/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 10:48:41 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/31 13:51:12 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include<iostream>

class Brain{
	protected:
		std::string *ideas;
	public:
		Brain( void );
		~Brain( void );
		Brain(const Brain& object);
		Brain& operator=(const Brain& object);
};

#endif
