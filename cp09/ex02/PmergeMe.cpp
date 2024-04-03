/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 12:07:12 by ohachami          #+#    #+#             */
/*   Updated: 2024/03/31 00:04:31 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe( void ){

}

PmergeMe::~PmergeMe( void ){
}

PmergeMe::PmergeMe(const PmergeMe& object){
    *this = object;
}

PmergeMe& PmergeMe::operator=( const PmergeMe& object ){
    (void)object;
    return *this;
}
