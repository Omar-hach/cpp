/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:52:29 by ohachami          #+#    #+#             */
/*   Updated: 2024/07/25 23:54:24 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP
# include <iostream>
# include <stack>
# include <cctype>

class RPN{
	private:
		int hit_last;
		RPN( void );
	public:
		RPN( std::string opr );
		~RPN( void );
		RPN(const RPN& object);
		RPN& operator=( const RPN& object );
		int opr_doing(std::stack<char> stck, int sum);
};

#endif
