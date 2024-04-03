/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 23:45:26 by ohachami          #+#    #+#             */
/*   Updated: 2024/04/03 20:11:31 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( void ){
	N = 0;
}

Span::Span( unsigned int N ){
	this->N = N;
	vct.reserve(N);
}

Span::~Span( void ){
}

Span::Span(const Span& object){
	*this = object;
}

Span& Span::operator=( const Span& object ){
	(void)object;
	return *this;
}

void Span::addNumber( std::vector<int>::iterator begin ,  std::vector<int>::iterator end ){
	int dis = std::distance(begin, end);
	if(vct.size() + dis > this->N)
		throw std::length_error("exceed the max cap of element");
	vct.insert(vct.end(),begin, end);
}

void Span::addNumber( int num ){
	if(vct.size() >= this->N)
		throw std::length_error("exceed the max cap of element");
	vct.push_back(num);
}

int Span::shortestSpan( void ){
	std::sort(vct.begin(), vct.end());
	std::vector<int>::iterator it = vct.begin();
	int min = *(it + 1) - *it;
	it++;
	for (; it != vct.end(); it++){
		if(min > *it - *(it - 1))
			min = *it - *(it - 1);
	}
	return min;
}

int Span::longestSpan( void ){
	std::vector<int>::iterator it = std::max_element(vct.begin(), vct.end());
	std::vector<int>::iterator ite = std::min_element(vct.begin(), vct.end());

	return *it - *ite;
}

