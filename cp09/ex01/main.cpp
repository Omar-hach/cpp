/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohachami <ohachami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 13:01:08 by ohachami          #+#    #+#             */
/*   Updated: 2024/03/14 00:54:25 by ohachami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
    if (argc < 2){
        std::cout << "Error: please enter an operation" << std::endl;
        return 1;
    }
    else if(argc > 2){
        std::cout << "Error: too much argement." << std::endl;
        return 1;
    }
    try
    {
        RPN rpn(argv[1]);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
