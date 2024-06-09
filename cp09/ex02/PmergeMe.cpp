/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 12:07:12 by ohachami          #+#    #+#             */
/*   Updated: 2024/05/08 18:40:36 by ohachami         ###   ########.fr       */
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

void generate_Jacobsthal_order(std::vector<unsigned int> &order,unsigned int size)
{
	unsigned int num_before_before = 0;
	unsigned int num_before = 1;
	unsigned int num;
	if(size > 0)
		order.push_back(1);
	for (unsigned int i = 0; i < size && size > 1;i++)
	{
		num = num_before + 2 * num_before_before;
		for(unsigned int j = num; j > num_before && order.size() < size ;j--)
		{
			if(j > size)
				continue;
			order.push_back(j);
		}
		num_before_before = num_before;
		num_before = num;
	}
}

void insert_elem(std::vector<unsigned int> &vct, unsigned int elem)
{
	unsigned int min;
	unsigned int max;
	
	min = 0;
	max = vct.size();
	for (unsigned int i = (max + min) / 2; max != min; i = (max + min) / 2)
	{
		if(elem >= vct.at(i))
			min = i + 1;
		else if(elem < vct.at(i))
			max = i;		
	}
	vct.insert(vct.begin() + max, elem);
}


void binary_search_insert(std::vector<unsigned int> &vct,
						std::vector< std::vector<unsigned int> > &pairs, int last_elem)
{
	std::vector< unsigned int > order;

	generate_Jacobsthal_order(order, pairs.size() - 1);
	for (unsigned int j = 0; j < order.size() ; j++)
		insert_elem(vct, pairs[order.at(j)].at(1));
	if (last_elem > -1)
		insert_elem(vct, static_cast<unsigned int>(last_elem));
		
}

void insert_sort_pairs(std::vector< std::vector<unsigned int> > &pairs ,unsigned int pairs_num)
{
	if (pairs_num < 2)
		return;
	insert_sort_pairs(pairs, pairs_num - 1);
	for (int j = pairs_num - 2; j > -1 && pairs[j].at(0) > pairs[j + 1].at(0); j--)
		std::swap(pairs[j], pairs[j + 1]);
	return;
}

std::vector<unsigned int> merge_sort_vect(std::vector<unsigned int> &vct)
{
	unsigned int pairs_num = (vct.size() / 2);
	if(pairs_num == 0)
		return vct;
	std::vector< std::vector<unsigned int> > pairs(pairs_num);
	std::vector< unsigned int > sorted_vect;

	int last_elem = -1;
	if(vct.size() % 2)
		last_elem = vct.back();
	for(unsigned int i = 0; i != pairs_num * 2; i++)
		pairs.at(i / 2).push_back(vct.at(i));
	for(unsigned int i = 0; i != pairs_num; i++)
	{
		if(pairs[i].at(0) < pairs[i].at(1))
			std::swap(pairs[i].at(0), pairs[i].at(1));
	}
	insert_sort_pairs(pairs, pairs_num);
	sorted_vect.push_back(pairs[0].at(1));
	for(unsigned int i = 0; i != pairs.size() ; i++)
		sorted_vect.push_back(pairs[i].at(0));
	if(vct.size() > 2)
		binary_search_insert(sorted_vect, pairs, last_elem);
	return sorted_vect;
}

//////////////////////////////////////////////////////////////////////////

void generate_Jacobsthal_order_list(std::list<unsigned int> &order,unsigned int size)
{
	unsigned int num_before_before = 0;
	unsigned int num_before = 1;
	unsigned int num;
	if(size > 0)
		order.push_back(1);
	for (unsigned int i = 0; i < size && size > 1;i++)
	{
		num = num_before + 2 * num_before_before;
		for(unsigned int j = num; j > num_before && order.size() < size ;j--)
		{
			if(j > size)
				continue;
			order.push_back(j);
		}
		num_before_before = num_before;
		num_before = num;
	}
}

void insert_elem_list(std::list<unsigned int> &lst, unsigned int elem)
{
	unsigned int min;
	unsigned int max;
	
	min = 0;
	max = lst.size();
	std::list< unsigned int>::iterator it;
	for (unsigned int i = (max + min) / 2; max != min; i = (max + min) / 2)
	{
		it = lst.begin();
		std::advance(it, i);
		if(elem >= (*it))
			min = i + 1;
		else if(elem < (*it))
			max = i;
	}
	it = lst.begin();
	std::advance(it, max);
	lst.insert(it, elem);
}

void binary_search_insert_list(std::list<unsigned int> &lst,
						std::list< std::list<unsigned int> > &pairs, int last_elem)
{
	std::list< unsigned int > order;
	std::list< std::list<unsigned int> >::iterator it_pair;
	
	generate_Jacobsthal_order_list(order, pairs.size() - 1);
	for (std::list< unsigned int>::iterator it = order.begin(); it != order.end() ; it++)
	{
		it_pair = pairs.begin();
		std::advance(it_pair, *it);
		insert_elem_list(lst, (*it_pair).front());
	}
	if (last_elem > -1)
		insert_elem_list(lst, static_cast<unsigned int>(last_elem));
}

void insert_sort_pairs_list(std::list< std::list<unsigned int> > &pairs ,unsigned int pairs_num)
{
	if (pairs_num < 2)
		return;
	insert_sort_pairs_list(pairs, pairs_num - 1);
	
	std::list< std::list<unsigned int> >::iterator it = pairs.begin();
	std::advance(it, pairs_num - 1);
	std::list< std::list<unsigned int> >::iterator ite = it;
	ite--;
	while (it !=  pairs.begin() && (*ite).back() > (*it).back()){
		std::swap(*ite, *it);
		it--;
		ite--;
	}
	return;
}

std::list<unsigned int> merge_sort_list(std::list<unsigned int> &lst)
{
	unsigned int pairs_num = (lst.size() / 2);
	if(pairs_num == 0)
		return lst;
	std::list< std::list<unsigned int> > pairs(pairs_num);
	std::list< unsigned int > sorted_list;
    std::list< unsigned int >::iterator it = lst.begin();

	int last_elem = -1;
	if(lst.size() % 2)
		last_elem = lst.back();
	for(std::list< std::list<unsigned int> >::iterator it_pair = pairs.begin(); it_pair != pairs.end(); it_pair++){
		(*it_pair).push_back(*(it++));
		(*it_pair).push_back(*(it++));
	}
	for(std::list< std::list<unsigned int> >::iterator it_pair = pairs.begin(); it_pair != pairs.end(); it_pair++)
	{
		if((*it_pair).back() < (*it_pair).front())
			std::swap((*it_pair).back(), (*it_pair).front());
	}
	insert_sort_pairs_list(pairs, pairs_num);
	sorted_list.push_back(pairs.front().front());
	for(std::list< std::list<unsigned int> >::iterator it_pair = pairs.begin(); it_pair != pairs.end(); it_pair++)
		sorted_list.push_back((*it_pair).back());
	if(lst.size() > 2)
		binary_search_insert_list(sorted_list, pairs, last_elem);
	return sorted_list;
}

PmergeMe::PmergeMe(std::vector<unsigned int> &vct){
	std::cout << "Before: " ;
	for(std::vector<unsigned int>::iterator it = vct.begin(); it != vct.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;

	clock_t start = clock();
	vct = merge_sort_vect(vct);
	clock_t end = clock();
	double diff =  double(end - start);
	
	std::cout << "After:  " ;
	for(std::vector<unsigned int>::iterator it = vct.begin(); it != vct.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	std::cout << "Time to process a range of " <<  vct.size() << " elements with std::vct : " << diff << " us" << std::endl;

}

PmergeMe::PmergeMe(std::list<unsigned int> &lst){
	clock_t start = clock();
	lst = merge_sort_list(lst);
	clock_t end = clock();
	
	std::cout << "Time to process a range of " <<  lst.size() << " elements with std::list : " << double(end - start) << " us" << std::endl;
}

