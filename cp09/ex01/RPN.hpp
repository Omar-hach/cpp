/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:52:29 by ohachami          #+#    #+#             */
/*   Updated: 2024/06/09 07:06:51 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP
# include <iostream>
# include <stack>
# include <cctype>

class RPN{
	private:
		RPN( void );
	public:
		RPN( std::string opr );
		~RPN( void );
		RPN(const RPN& object);
		RPN& operator=( const RPN& object );
};

#endif
