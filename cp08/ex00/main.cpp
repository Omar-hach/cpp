/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 23:52:15 by ohachami          #+#    #+#             */
/*   Updated: 2024/03/03 10:51:25 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"easyfind.hpp"

int main()
{
    std::list<int> lst;
    lst.push_front(12);
    lst.push_front(5);
    lst.push_front(-6);
    lst.push_front(5);
    lst.push_front(98);
    lst.push_front(4);
    
    int value = -69;
    easyfind(lst, value);
    value = -6;
    easyfind(lst, value);

    std::vector<int> vct;
    vct.push_back(12);
    vct.push_back(5);
    vct.push_back(-6);
    vct.push_back(5);
    vct.push_back(98);
    vct.push_back(4);
    
    value = -69;
    easyfind(vct, value);
    value = -6;
    easyfind(vct, value);
}
