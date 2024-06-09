/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 12:05:49 by ohachami          #+#    #+#             */
/*   Updated: 2024/05/08 18:42:55 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	std::vector<unsigned int> vct;
	std::list<unsigned int> lst;

	if (argc < 2){
		std::cout << "Error: please series of positif number to be sorted" << std::endl;
		return 1;
	}
	int i = 0;
	char *rest;
	while(++i < argc)
	{
		std::string str_argv(argv[i]);
		if(str_argv.find_first_not_of("0123456789+ ") != std::string::npos
			|| static_cast<int>(std::count(str_argv.begin(), str_argv.end(), ' ')) == static_cast<int>(str_argv.size())
			|| std::count(str_argv.begin(), str_argv.end(), '+') > 1){
			std::cout << "Error" << std::endl;
			return 1;
		}
		vct.push_back(std::strtod(argv[i], &rest));
		if(std::string(rest).find("+") != std::string::npos){
			std::cout << "Error" << std::endl;
			return 1;
		}
	}
	PmergeMe permgeme_vct(vct);
	for(int i = 1; i < argc; i++)
		lst.push_back(std::strtod(argv[i], NULL));
	PmergeMe permgeme_lst(lst);
}
