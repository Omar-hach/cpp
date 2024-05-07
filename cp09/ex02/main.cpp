/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 12:05:49 by ohachami          #+#    #+#             */
/*   Updated: 2024/05/07 14:54:54 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	std::vector<unsigned int> vct;
	std::list<unsigned int> lst;
	std::deque<unsigned int> dque;

	if (argc < 2){
		std::cout << "Error: please enter an operation" << std::endl;
		return 1;
	}
	int i = 0;
	std::string all_args;
	while(++i < argc)
		all_args.append(argv[i]);
	std::cout << all_args << std::endl;
	if(all_args.find_first_not_of("0123456789 ") != std::string::npos){
		std::cout << "Error" << std::endl;
		return 1;
	}
	i = 0;
	while(++i < argc)
		vct.push_back(std::strtod(argv[i], NULL));
	std::vector<unsigned int>::iterator it = vct.begin();
	std::cout << "Before: " ;
	for(; it != vct.end(); it++)
		std::cout << *it << " ";
	std::cout << " |" << vct.size() << "|";
	std::cout << std::endl;

	
	std::cout << " here" << std::endl;
	clock_t start = clock();
	vct = merge_sort_vect(vct);
	clock_t end = clock();
	
	
	it = vct.begin();
	std::cout << std::endl;
	std::cout << "Time to process a range of " <<  vct.size() << " elements with std::vector : " << double(end - start)  << " us" << std::endl;
	i = 0;
	while(++i < argc)
		dque.push_back(std::strtod(argv[i], NULL));
	start = clock();
	dque = merge_sort_deque(dque);
	end = clock();
	std::cout << "Time to process a range of " <<  vct.size() << " elements with std::deque : " << double(end - start) << " us" << std::endl;

	for(int i = 1; i < argc; i++)
		lst.push_back(std::strtod(argv[i], NULL));
	start = clock();
	lst = merge_sort_list(lst);
	end = clock();
	std::cout << "After:  " ;
	for(std::list<unsigned int>::iterator it_lst = lst.begin(); it_lst != lst.end(); it_lst++)
		std::cout << *it_lst << " ";
	std::cout << std::endl;	
	
	std::cout << "Time to process a range of " <<  vct.size() << " elements with std::list : " << double(end - start) << " us" << std::endl;
	if (std::is_sorted(vct.begin(), vct.end()) && std::is_sorted(dque.begin(), dque.end()) && std::is_sorted(lst.begin(), lst.end()))
        std::cout << "Sorted ^_______^";
    else
        std::cout << "Not Sorted " ;
	std::cout << std::endl;
}
