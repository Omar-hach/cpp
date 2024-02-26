/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 07:04:28 by ohachami          #+#    #+#             */
/*   Updated: 2024/02/11 11:11:52 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP
# include <iostream>

typedef struct Data{
	void *ptr;
}Data;

class Serializer{
	public:
		static uintptr_t serialize(Data* ptr);
		Data* deserialize(uintptr_t raw);
		Serializer( void );
		~Serializer( void );
		Serializer(const Serializer& object);
		Serializer& operator=( const Serializer& object );
};


#endif