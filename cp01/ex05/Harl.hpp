/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 16:15:03 by ohachami          #+#    #+#             */
/*   Updated: 2023/12/19 22:25:14 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HARL_HPP
# define HARL_HPP
# include<iostream>

class Harl{
	private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
    public:
        Harl(void);
        ~Harl(void);
        void complain( std::string level );
};

#endif