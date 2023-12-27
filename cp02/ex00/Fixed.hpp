/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:24:18 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/23 08:15:45 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include<iostream>

class Fixed{
	private:
        int integer;
        const static int fractBits;
    public:
        Fixed( void );
        ~Fixed( void );
        Fixed(const Fixed &object);
        Fixed& operator=(Fixed const& F);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif