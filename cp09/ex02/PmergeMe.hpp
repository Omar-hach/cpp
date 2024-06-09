/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 12:07:06 by ohachami          #+#    #+#             */
/*   Updated: 2024/05/08 18:35:42 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP
# include <iostream>
# include <vector>
# include <list>
# include <ctime>
# include <iterator>
# include <algorithm>

class PmergeMe{
    private:
		PmergeMe( void );
		
	public:
		PmergeMe( std::vector<unsigned int> &vct );
		PmergeMe( std::list<unsigned int> &lst );
		~PmergeMe( void );
		PmergeMe(const PmergeMe& object);
		PmergeMe& operator=( const PmergeMe& object );
};

std::vector<unsigned int> merge_sort_vect(std::vector<unsigned int> &vct);
void insert_sort_pairs(std::vector< std::vector<unsigned int> > &pairs ,unsigned int pairs_num);
void binary_search_insert(std::vector<unsigned int> &vct, std::vector< std::vector<unsigned int> > &pairs, int last_elem);
void insert_elem(std::vector<unsigned int> &vct, unsigned int elem);
void generate_Jacobsthal_order(std::vector<unsigned int> &order,unsigned int size);


std::list<unsigned int> merge_sort_list(std::list<unsigned int> &vct);
void insert_sort_pairs_list(std::list< std::list<unsigned int> > &pairs ,unsigned int pairs_num);
void binary_search_insert_list(std::list<unsigned int> &vct, std::list< std::list<unsigned int> > &pairs, int last_elem);
void insert_elem_list(std::list<unsigned int> &vct, unsigned int elem);
void generate_Jacobsthal_order_list(std::list<unsigned int> &order,unsigned int size);

#endif
