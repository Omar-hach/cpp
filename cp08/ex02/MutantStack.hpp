/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 13:19:13 by ohachami          #+#    #+#             */
/*   Updated: 2024/03/12 14:47:00 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <iterator>
# include <deque>
# include <stack>

template < typename T>
class MutantStack : public std::stack<T>{
    private:
	public:
		MutantStack( void ){
		}

		~MutantStack( void ){
		}

		MutantStack(const MutantStack &obj){
			*this = obj;
		}

		MutantStack& operator=(const MutantStack& obj){
			(void)obj;
			return *this;
		}
		typedef typename std::deque<T>::iterator iterator;
		iterator begin(){
			return this->c.begin();
		}
		iterator end(){
			return this->c.end();
		}
};


#endif