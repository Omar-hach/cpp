/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 23:45:23 by ohachami          #+#    #+#             */
/*   Updated: 2024/02/24 23:50:14 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>

class Span{
    private:
        int N;
	public:
		Span( void );
		~Span( void );
		Span(const Span& object);
		Span& operator=( const Span& object );
		void addNumber( int &num );
		int shortestSpan( void );
        int longestSpan( void );
};


#endif
