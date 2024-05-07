/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 13:18:53 by ohachami          #+#    #+#             */
/*   Updated: 2024/04/27 00:46:17 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "top of the stack  = " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "size of the stack  = " <<  mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    if(mstack.empty())
        std::cout << "MutantStack is empty" << std::endl;
    else
        std::cout << "MutantStack is not empty" << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
        std::cout << *(it++) << std::endl;
    std::stack<int> s(mstack);
    std::stack<int> s2 = mstack;
    return 0;
}
