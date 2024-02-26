/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 23:38:13 by ohachami          #+#    #+#             */
/*   Updated: 2024/02/26 08:28:11 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template< typename T >
class	Array{
	private:
		T *elem;
		unsigned int len;
	public:
		Array(){
			this->len = 0;
			this->elem = new T();
			std::cout << "elem =" << elem << std::endl;
		};
		Array(unsigned int n){
			this->len = n;
			this->elem = new T[n];
		};
		~Array(){
			if(elem)
       			delete[] elem;
		}
		Array(const Array &obj){
			//ideas = NULL;
			*this = obj;
		};
		Array& operator=(const Array& obj){
			if (this != &obj)
			{
				std::cout << "elem =" << this->len << std::endl;
				std::cout << "end heere" << std::endl;
				if(this->elem)
					delete[] this->elem;
				this->len = obj.size();
				this->elem = new T[this->len];
				for (unsigned int i = 0; i < this->len; i++)
					this->elem[i] = obj[i];
			}
			return *this;
		};
		T& operator[](int index) const
		{
			if (index < 0 && static_cast<unsigned int>(index) >= this->len)
				throw (OutOfRangeException());
			return elem[index];
		};
		unsigned int size( void ) const{
			return this->len;
		};
		class OutOfRangeException : public std::exception{
			public:
				const char* what() const throw(){
					return "out of range" ;
				};
		};
};

#endif