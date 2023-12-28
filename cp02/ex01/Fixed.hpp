/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:24:18 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/27 09:52:56 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include<iostream>
# include<cmath>

class Fixed{
	private:
		int integer;
		const static int fractBits;
	public:
		Fixed( void );
		~Fixed( void );
		Fixed(const Fixed &object);
		Fixed(const int intgr);
		Fixed(const float floating);
		Fixed& operator=(const Fixed& F);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream& operator<<(std::ostream &out, const Fixed& F);

#endif