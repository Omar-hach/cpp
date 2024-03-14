/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:52:29 by ohachami          #+#    #+#             */
/*   Updated: 2024/03/13 16:11:20 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP
# include <iostream>
# include <set>
# include <stack>
# include <iterator>
# include <cctype>

class RPN{
	private:
		std::stack<int> opr_stack;
		RPN( void );
	public:
		RPN( std::string opr );
		~RPN( void );
		RPN(const RPN& object);
		RPN& operator=( const RPN& object );
};

#endif
