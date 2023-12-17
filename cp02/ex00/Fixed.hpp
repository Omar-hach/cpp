/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:24:18 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/17 18:05:17 by ohachami         ###   ########.fr       */
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
        int getRawBits( void ) const;
        void setRawBits( int const raw );
    
};

#endif