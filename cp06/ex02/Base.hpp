/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 10:32:40 by ohachami          #+#    #+#             */
/*   Updated: 2024/02/19 22:00:19 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP
# include <iostream>
# include <cstdlib>

class Base{
	public:
		virtual ~Base( void );
};

Base	*generate(void);
void	identify(Base* p);
void	identify(Base& p);

#endif