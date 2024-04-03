/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 23:45:23 by ohachami          #+#    #+#             */
/*   Updated: 2024/04/03 20:02:33 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <algorithm>
# include <vector>
# include <iterator>

class Span{
	private:
		unsigned int N;
		std::vector<int> vct;
	public:
		Span( void );
		Span( unsigned int N );
		~Span( void );
		Span(const Span& object);
		Span& operator=( const Span& object );
		void addNumber( std::vector<int>::iterator begin ,  std::vector<int>::iterator end);
		void addNumber( int num );
		int shortestSpan( void );
		int longestSpan( void );
};


#endif
