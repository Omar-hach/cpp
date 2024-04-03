/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 12:05:49 by ohachami          #+#    #+#             */
/*   Updated: 2024/04/02 17:51:50 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void insertion_sort(std::vector<unsigned int> &vct1, std::vector<unsigned int> &vct2){
    int i = vct1.size() / 2;
    for(std::vector<unsigned int>::iterator it = vct2.begin(); it != vct2.end(); it++){
        i = vct1.size() / 2;
        while(i > 0){
            if(vct1[i] < *it)
                break;
            i = i / 2;
        }
        vct1.insert(vct1.begin() + i, *it);
    }
}

void merge_sort_vect(std::vector<unsigned int> &vct){
    
}

int main(int argc, char **argv)
{
    std::vector<unsigned int> vct;
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
    merge_sort_vect(vct);
    std::vector<unsigned int>::iterator it = vct.begin();
    std::cout << "After: " ;
    for(; it != vct.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
}
