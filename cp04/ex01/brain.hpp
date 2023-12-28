/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 15:48:54 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/28 15:50:05 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include<iostream>

class brain{
	protected:
		std::string type;
	public:
		brain( void );
		~brain( void );
		brain(const brain& object);
		brain& operator=(const brain& object);
		std::string getType( void) const;
		void makeSound( void );
};