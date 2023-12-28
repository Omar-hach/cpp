/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:24:18 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/27 09:53:25 by ohachami         ###   ########.fr       */
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
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
		Fixed& operator=(const Fixed& F);
		Fixed& operator+(const Fixed& F);
		Fixed& operator*(const Fixed& F);
		Fixed& operator/(const Fixed& F);
		Fixed& operator-(const Fixed& F);
		bool operator!=(const Fixed& F) const;
		bool operator>(const Fixed& F) const;
		bool operator>=(const Fixed& F) const;
		bool operator==(const Fixed& F) const;
		bool operator<(const Fixed& F) const;
		bool operator<=(const Fixed& F) const;

		Fixed& operator++(void);
		Fixed& operator--(void);
		Fixed& operator++(int const);
		Fixed& operator--(int const);
		static Fixed& min(Fixed& F, Fixed& E);
		static Fixed& min(const Fixed& F, const Fixed& E);
		static Fixed& max(Fixed& F, Fixed& E);
		static Fixed& max(const Fixed& F, const Fixed& E);
};

std::ostream& operator<<(std::ostream &out, const Fixed& F);

#endif